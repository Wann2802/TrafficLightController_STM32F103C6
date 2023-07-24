#include "main.h"
#ifndef __TRAFFIC_LIGHT_SIGNAL_HANDLER__
#define __TRAFFIC_LIGHT_SIGNAL_HANDLER__


struct {
	bool redLight;
	bool yellowLight;
	bool greenLight;
} TrafficLightSignal;

enum {
	NORTH,
	SOUTH,
	EAST,
	WEST
} TrafficDirection;


void TLSH_TraffigLightSignalHandler_Main();
void TLSH_UpdateCurrentLightSignal(TrafficLightSignal* lightSignal);
void TLSH_SetMcuSignal(const TrafficLightSignal* lightSignal, );



#endif
