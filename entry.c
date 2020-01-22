#include "../functions.h"
#include "vars.h"
entry_order_type = LIMIT
entry_order_side = SHORT
entry_destination = CSFB
entry_size = 100
entry_tif = TIF_OPENING
entry_tif_seconds =
entry_order_limit =
{
  if(entry_trig, entry_price, 0)
}

entry_aggregated_TIF = FALSE
entry_calculate_limit_during_placement = FALSE
entry_tif2 =
entry_tif2_seconds =
entry_order_stop =
{

}
