#pragma once

#include "render/render_internal.h"
#include "input.h"
#include "time.h"

class Global{
    

    public:
        Global();
        int teste;
        Render_State render;
        Input_State input;
        Time_State time;
        
};

extern Global global;
