#include "../functions.h"
#include "vars.h"
stop_order_type = PRIMUS_STOP
stop_order_side = BUY
stop_size = 100
stop_price =
{
  hard_stop
}
enable_trailing = TRUE
trail_after_entry_complete = TRUE
trail_once = FALSE
trail_trigger =
{
  stop_trigger
}
trail_how =
{
  trail_price
}
trail_increment =
{
 .03
}
