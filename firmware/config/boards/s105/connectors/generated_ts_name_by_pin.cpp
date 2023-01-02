//DO NOT EDIT MANUALLY, let automation work hard.

// auto-generated by PinoutLogic.java based on config/boards/s105/connectors/s105.yaml
#include "pch.h"

// see comments at declaration in pin_repository.h
const char * getBoardSpecificPinName(brain_pin_e brainPin) {
	switch(brainPin) {
		case Gpio::B14: return "46 - Absorber";
		case Gpio::B8: return "na 8 - TACH";
		case Gpio::B9: return "10 - ECO Out";
		case Gpio::C6: return "29 - EGR";
		case Gpio::C7: return "28 - AFR Heater 2";
		case Gpio::D0: return "na 25 - INJ_7";
		case Gpio::D10: return "7 - INJ_3";
		case Gpio::D11: return "47 - INJ_4";
		case Gpio::D12: return "2 - IGN_2";
		case Gpio::D13: return "5 - IGN_1";
		case Gpio::D14: return "1 - IGN_4";
		case Gpio::D15: return "4 - IGN_3";
		case Gpio::D2: return "70 - Fuel Pump Relay";
		case Gpio::D6: return "na 58 - Fan Relay";
		case Gpio::D8: return "27 - INJ_1";
		case Gpio::D9: return "6 - INJ_2";
		case Gpio::E0: return "9 - Unk Out 1";
		case Gpio::E10: return "na 69 - AC Relay";
		case Gpio::E12: return "50 - AUX Starter Relay";
		case Gpio::E14: return "31 - CEL";
		case Gpio::E5: return "48 - AFR Heater 1";
		case Gpio::E6: return "na 49 - INJ_6";
		case Gpio::E9: return "na 20 - Unk Out 2";
		default: return nullptr;
	}
	return nullptr;
}
