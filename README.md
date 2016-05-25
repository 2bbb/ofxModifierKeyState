# ofxModifierKeyState

```
void setup() {
	ofxModifierKeyState::setup(); // setup key event listener
}

void update() {
	ofLogNotice("shift") << ofxModifierKeyState::isShiftPressed();
	ofLogNotice("l shift") << ofxModifierKeyState::isLeftShiftPressed();
	ofLogNotice("r shift") << ofxModifierKeyState::isRightShiftPressed();
	ofLogNotice("command") << ofxModifierKeyState::isCommandPressed();
	ofLogNotice("l command") << ofxModifierKeyState::isLeftCommandPressed();
	ofLogNotice("r command") << ofxModifierKeyState::isRightCommandPressed();
}
```

## API

### void setup()

setup key event listener in background

### bool isShiftPressed();
### bool isLeftShiftPressed();
### bool isRightShiftPressed();
### bool isAltPressed();
### bool isLeftAltPressed();
### bool isRightAltPressed();
### bool isCommandPressed();
### bool isLeftCommandPressed();
### bool isRightCommandPressed();
### bool isControlPressed();
### bool isLeftControlPressed();
### bool isRightControlPressed();

get modifier key state

## Update history

### 2016/05/26 ver 0.0.1 release

* initial

## License

MIT License.

## Author

* ISHII 2bit [bufferRenaiss co., ltd.]
* ishii[at]buffer-renaiss.com

## At the last

Please create a new issue if there is a problem.
And please throw a pull request if you have a cool idea!!
