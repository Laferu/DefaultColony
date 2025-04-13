#pragma once
#include <Spore/Simulator/cTurret.h>

namespace Simulator {
    inline void intrusive_ptr_add_ref(cTurret* ptr) {
        ptr->cGameData::AddRef();
    }

    inline void intrusive_ptr_release(cTurret* ptr) {
        ptr->cGameData::Release();
    }
}