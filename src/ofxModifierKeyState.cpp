//
//  ofxModifierKeyState.cpp
//
//  Created by ISHII 2bit on 2016/05/25.
//
//

#include "ofxModifierKeyState.h"
#include "ofMain.h"

namespace ofx {
    namespace {
        bool bLeftShiftPressed;
        bool bRightShiftPressed;
        bool bLeftAltPressed;
        bool bRightAltPressed;
        bool bLeftCommandPressed;
        bool bRightCommandPressed;
        bool bLeftControlPressed;
        bool bRightControlPressed;
    };
    
    namespace ModifierKeyState {
        bool isShiftPressed() {
            return bLeftShiftPressed || bRightShiftPressed;
        }
        bool isLeftShiftPressed() {
            return bLeftShiftPressed;
        }
        bool isRightShiftPressed() {
            return bRightShiftPressed;
        }
        bool isAltPressed() {
            return bLeftAltPressed || bRightAltPressed;
        }
        bool isLeftAltPressed() {
            return bLeftAltPressed;
        }
        bool isRightAltPressed() {
            return bRightAltPressed;
        }
        bool isCommandPressed() {
            return bLeftCommandPressed || bRightCommandPressed;
        }
        bool isLeftCommandPressed() {
            return bLeftCommandPressed;
        }
        bool isRightCommandPressed() {
            return bRightCommandPressed;
        }
        bool isControlPressed() {
            return bLeftControlPressed || bRightControlPressed;
        }
        bool isLeftControlPressed() {
            return bLeftControlPressed;
        }
        bool isRightControlPressed() {
            return bRightControlPressed;
        }
        
        struct StateReceiver {
            void setup() {
                ofAddListener(ofEvents().keyPressed, this, &StateReceiver::keyPressed, OF_EVENT_ORDER_BEFORE_APP);
                ofAddListener(ofEvents().keyReleased, this, &StateReceiver::keyReleased, OF_EVENT_ORDER_BEFORE_APP);
            }
            
            void keyPressed(ofKeyEventArgs &arg) {
                constexpr bool b = true;
                if(arg.key & OF_KEY_MODIFIER) {
                    switch(arg.key) {
                        case OF_KEY_LEFT_SHIFT: bLeftShiftPressed = b; return;
                        case OF_KEY_RIGHT_SHIFT: bRightShiftPressed = b; return;
                        case OF_KEY_LEFT_ALT: bLeftAltPressed = b; return;
                        case OF_KEY_RIGHT_ALT: bRightAltPressed = b; return;
                        case OF_KEY_LEFT_COMMAND: bLeftCommandPressed = b; return;
                        case OF_KEY_RIGHT_COMMAND: bRightCommandPressed = b; return;
                        case OF_KEY_LEFT_CONTROL: bLeftControlPressed = b; return;
                        case OF_KEY_RIGHT_CONTROL: bRightControlPressed = b; return;
                        default: return;
                    }
                }
            }
            
            void keyReleased(ofKeyEventArgs &arg) {
                constexpr bool b = false;
                if(arg.key & OF_KEY_MODIFIER) {
                    switch(arg.key) {
                        case OF_KEY_LEFT_SHIFT: bLeftShiftPressed = b; return;
                        case OF_KEY_RIGHT_SHIFT: bRightShiftPressed = b; return;
                        case OF_KEY_LEFT_ALT: bLeftAltPressed = b; return;
                        case OF_KEY_RIGHT_ALT: bRightAltPressed = b; return;
                        case OF_KEY_LEFT_COMMAND: bLeftCommandPressed = b; return;
                        case OF_KEY_RIGHT_COMMAND: bRightCommandPressed = b; return;
                        case OF_KEY_LEFT_CONTROL: bLeftControlPressed = b; return;
                        case OF_KEY_RIGHT_CONTROL: bRightControlPressed = b; return;
                        default: return;
                    }
                }
            }
        } state_receiver_;

        void setup() {
            state_receiver_.setup();
        }
    };
};
