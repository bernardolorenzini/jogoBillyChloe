#pragma once

typedef enum input_key {
    INPUT_KEY_LEFT,
    INPUT_KEY_RIGHT,
    INPUT_KEY_UP,
    INPUT_KEY_DOWN,
    INPUT_KEY_ESCAPE
} Input_Key;

typedef enum key_state{
    KS_UNPRESSED,
    KS_PRESSED,
    KS_HELD
} Key_State;

class Input_State{

    public:
        Key_State left;
        Key_State right;
        Key_State up;
        Key_State down;
        Key_State escape;

};

Input_State input_state;