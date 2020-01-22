// define vars shared between files
#include "../functions.h"

// general
#define name some name
#define version 0.0
#define desc some description

// basket
#define basket_rule adrs > 1

// entry
#define entry_trig close > 0
#define entry_price close * .99

// launch rules
#define launch_filter not half_day

// position sizing
#define shares_per_adr 250
#define dollar_per_position 10000
#define adr_def adrs
#define ref_price_def max2(close, pre_mkt_last)
#define max_risk_mgt_shares 2000
#define size_factor 1

#define position_size position_size_opg

// stop
#define hard_stop execution * 1000
#define stop_trigger time_in_position_sec > 300
#define trail_price minute_high(20) + minute_range(3)

// target
#define target_trigger last < execution * .9
#define target_price bid - .01
