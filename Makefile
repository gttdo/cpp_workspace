.PHONY: clean All

All:
	@echo "----------Building project:[ Practice_Run_1 - Debug ]----------"
	@cd "Practice_Run_1" && "$(MAKE)" -f  "Practice_Run_1.mk"
clean:
	@echo "----------Cleaning project:[ Practice_Run_1 - Debug ]----------"
	@cd "Practice_Run_1" && "$(MAKE)" -f  "Practice_Run_1.mk" clean
