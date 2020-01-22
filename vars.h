// define vars shared between files
#include "../functions.h"

// general
#define name MarchingAntShortOPG
#define version 0.0
#define desc Enters OPG has no stop, ael marches down until fill

// stop
#define hard_stop execution * 1000

// target
#define target_trigger execution > 0
#define target_price min2(bid, execution - (1 -  time_from_open_sec/600))
