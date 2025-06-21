#ifndef _OUTPUTS_H_
#define _OUTPUTS_H_

/* Setting state of outputs: flickering, unzipping state, calling S-COM library.
 */

#include <stdint.h>
#include <stddef.h>

#include "io.h"

// Data in zipped format according to protocol's «Set Output» command description:
// https://github.com/kmzbrnoI/mtbbus-protocol/blob/master/modules/uni.md#module-specific-commands
void outputs_set_zipped(uint8_t data[], size_t length);
void outputs_set_full(uint8_t data[NO_OUTPUTS_ALL]);
void outputs_update(void); // should be called each 10 ms
void outputs_apply_state(void);

extern uint8_t _outputs_state[NO_OUTPUTS_ALL];

#endif
