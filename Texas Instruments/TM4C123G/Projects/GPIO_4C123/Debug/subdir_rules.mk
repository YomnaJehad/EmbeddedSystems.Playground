################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
GPIO.obj: ../GPIO.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"D:/EngineeringSoftware/CCS/ccsv7/tools/compiler/ti-cgt-arm_16.9.0.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="D:/EngineeringSoftware/CCS/ccsv7/tools/compiler/ti-cgt-arm_16.9.0.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --asm_listing --c_src_interlist --preproc_with_compile --preproc_dependency="GPIO.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

tm4c123gh6pm_startup_ccs.obj: ../tm4c123gh6pm_startup_ccs.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: ARM Compiler'
	"D:/EngineeringSoftware/CCS/ccsv7/tools/compiler/ti-cgt-arm_16.9.0.LTS/bin/armcl" -mv7M4 --code_state=16 --float_support=FPv4SPD16 -me --include_path="D:/EngineeringSoftware/CCS/ccsv7/tools/compiler/ti-cgt-arm_16.9.0.LTS/include" --define=ccs="ccs" --define=PART_TM4C123GH6PM -g --c99 --gcc --diag_warning=225 --diag_wrap=off --display_error_number --abi=eabi --asm_listing --c_src_interlist --preproc_with_compile --preproc_dependency="tm4c123gh6pm_startup_ccs.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

