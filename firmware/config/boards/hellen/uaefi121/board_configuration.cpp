/**
 * See https://rusefi.com/s/uaefi121
 *
 * @author Andrey Belomutskiy, (c) 2012-2023
 */

#include "pch.h"
#include "defaults.h"
#include "hellen_meta.h"
#include "hellen_leds_100.cpp"

void setBoardConfigOverrides() {
	setHellenMegaEnPin();
	setHellenVbatt();

	hellenMegaSdWithAccelerometer();
	setDefaultHellenAtPullUps();

	engineConfiguration->canTxPin = Gpio::B13;
	engineConfiguration->canRxPin = Gpio::B5;


}

void setBoardDefaultConfiguration() {

}

int getBoardMetaDcOutputsCount() {
    return 2;
}
