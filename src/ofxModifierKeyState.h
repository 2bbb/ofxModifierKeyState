//
//  ofxModifierKeyState.h
//
//  Created by ISHII 2bit on 2016/05/25.
//
//

#pragma once

namespace ofx {
    namespace ModifierKeyState {
        bool isShiftPressed();
        bool isLeftShiftPressed();
        bool isRightShiftPressed();
        bool isAltPressed();
        bool isLeftAltPressed();
        bool isRightAltPressed();
        bool isCommandPressed();
        bool isLeftCommandPressed();
        bool isRightCommandPressed();
        bool isControlPressed();
        bool isLeftControlPressed();
        bool isRightControlPressed();
        void setup();
    };
};

namespace ofxModifierKeyState = ofx::ModifierKeyState;