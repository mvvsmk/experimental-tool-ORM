#! /usr/bin/env python3


def make_sum_squares_asm(flops_per_element, output_file):
    template  = """
    section .text align=64
    global sumsq
    global sumsqf

    sumsq:
        vzeroall
        add rdi, 512
        mov rax, 1024
        sub rsi, 128
        
        jb .restore
        align 64
        sub rdi, rax
    .process_by_32:
        add rdi, rax

        vmovapd zmm0, [rdi - 512]
        vmovapd zmm1, [rdi - 448]
    {flops1}
        vmovapd zmm2, [rdi - 384]
        vmovapd zmm3, [rdi - 320]
    {flops2}
        vmovapd zmm4, [rdi - 256]
        vmovapd zmm5, [rdi - 192]
    {flops3}
        vmovapd zmm6, [rdi - 128]
        vmovapd zmm7, [rdi - 64]
    {flops4}
        vmovapd [rdi - 512], zmm0
        vmovapd [rdi - 448], zmm1
    {flops5}
        vmovapd [rdi - 384], zmm2
        vmovapd [rdi - 320], zmm3
    {flops6}
        vmovapd [rdi - 256], zmm4
        vmovapd [rdi - 192], zmm5
    {flops7}
        vmovapd [rdi - 128], zmm6
        vmovapd [rdi - 64] , zmm7
    {flops8}
        vmovapd zmm0, [rdi]
        vmovapd zmm1, [rdi + 64]
    {flops9}
        vmovapd zmm2, [rdi + 128]
        vmovapd zmm3, [rdi + 192]
    {flops10}
        vmovapd zmm4, [rdi + 256]
        vmovapd zmm5, [rdi + 320]
    {flops11}
        vmovapd zmm6, [rdi + 384]
        vmovapd zmm7, [rdi + 448]
    {flops12}
        vmovapd [rdi], zmm0
        vmovapd [rdi + 64] , zmm1
    {flops13}
        vmovapd [rdi + 128], zmm2
        vmovapd [rdi + 192], zmm3
    {flops14}
        vmovapd [rdi + 256], zmm4
        vmovapd [rdi + 320], zmm5
    {flops15}
        vmovapd [rdi + 384], zmm6
        vmovapd [rdi + 448], zmm7
    {flops16}

        sub rsi, 128
        jae .process_by_32
    .restore:
        add rsi, 128
        jz .finish
        int 3
    .finish:
        vzeroupper
        ret

    sumsqf:
        sub rdi, -128
        mov eax, 256
        vzeroall
        sub rsi, 64
        
        jb .restore
        align 32
    .process_by_64:
        vmovaps ymm0, [rdi - 128]
        vmovaps ymm1, [rdi - 96]
        vmovaps ymm2, [rdi - 64]
        vmovaps ymm3, [rdi - 32]
        vmovaps ymm4, [rdi]
        vmovaps ymm5, [rdi + 32]
        vmovaps ymm6, [rdi + 64]
        vmovaps ymm7, [rdi + 96]


    ; %rep MAD_PER_ELEMENT
        vmulps ymm0, ymm0, ymm0
        vaddps ymm8, ymm8, ymm0
        vmulps ymm1, ymm1, ymm1
        vaddps ymm9, ymm9, ymm1
        vmulps ymm2, ymm2, ymm2
        vaddps ymm10, ymm10, ymm2
        vmulps ymm3, ymm3, ymm3
        vaddps ymm11, ymm11, ymm3
        vmulps ymm4, ymm4, ymm4
        vaddps ymm12, ymm12, ymm4
        vmulps ymm5, ymm5, ymm5
        vaddps ymm13, ymm13, ymm5
        vmulps ymm6, ymm6, ymm6
        vaddps ymm14, ymm14, ymm6
        vmulps ymm7, ymm7, ymm7
        vaddps ymm15, ymm15, ymm7
        add rdi, rax
        sub rsi, 64
        jae .process_by_64
    .restore:
        add rsi, 64
        jz .finish
        int 3
    .finish:
        vzeroupper
        ret
    """

    flops = """
        vfmadd213pd zmm0, zmm0, zmm0
        vfmadd213pd zmm1, zmm1, zmm1
        vfmadd213pd zmm2, zmm2, zmm2
        vfmadd213pd zmm3, zmm3, zmm3
        vfmadd213pd zmm4, zmm4, zmm4
        vfmadd213pd zmm5, zmm5, zmm5
        vfmadd213pd zmm6, zmm6, zmm6
        vfmadd213pd zmm7, zmm7, zmm7
    """
    
    flop = """\tvfmadd213pd zmm{num}, zmm{num}, zmm{num}\n"""

    num = flops_per_element

    flops_per_group = num // 16
    flops_adjusted = num % 16
    print(flops_per_group, flops_adjusted)
    array_tracks_flops = [flops_per_group] * 16
    print(array_tracks_flops)
    for i in range(flops_adjusted):
        array_tracks_flops[i] += 1
    print(array_tracks_flops)
    flops_strings = []
    for number_flops in array_tracks_flops:
        flop_sring = "\n"
        for i in range(number_flops):
            j = i % 31
            flop_sring += flop.format(num=j)
        flops_strings.append(flop_sring)
    # print(flops_strings)
    final_file = template.format(flops1=flops_strings[0], 
                                flops2=flops_strings[1], 
                                flops3=flops_strings[2], 
                                flops4=flops_strings[3], 
                                flops5=flops_strings[4], 
                                flops6=flops_strings[5], 
                                flops7=flops_strings[6], 
                                flops8=flops_strings[7],
                                flops9=flops_strings[8],
                                flops10=flops_strings[9],
                                flops11=flops_strings[10],
                                flops12=flops_strings[11],
                                flops13=flops_strings[12],
                                flops14=flops_strings[13],
                                flops15=flops_strings[14],
                                flops16=flops_strings[15])
    # write final file to sumsq.asm
    with open(output_file, "w") as f:
        f.write(final_file)