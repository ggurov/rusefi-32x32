
# 100 package MCU
ifeq ($(LED_CRITICAL_ERROR_BRAIN_PIN),)
  LED_CRITICAL_ERROR_BRAIN_PIN = -DLED_CRITICAL_ERROR_BRAIN_PIN=Gpio::MM100_LED1_RED
endif

DDEFS += $(LED_CRITICAL_ERROR_BRAIN_PIN)



DDEFS += -DHELLEN_BOARD_ID_PIN_1=Gpio::MM100_BOARD_ID1 -DHELLEN_BOARD_ID_PIN_2=Gpio::MM100_BOARD_ID2

include $(BOARDS_DIR)/hellen/hellen-common.mk