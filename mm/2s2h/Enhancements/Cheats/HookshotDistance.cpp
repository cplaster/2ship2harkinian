#include <libultraship/bridge.h>
#include "Enhancements/GameInteractor/GameInteractor.h"

void RegisterHookshotDistance() {
    REGISTER_VB_SHOULD(GI_VB_ENABLE_HOOKSHOT_DISTANCE_MULTIPLIER, {
        if (CVarGetFloat("gCheats.HookshotDistanceMultiplier", 1.0f) != 1.0f) {
            *should = true;
        }
    });
}
