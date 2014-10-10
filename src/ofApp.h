#pragma once

#include "ofMain.h"
#include "ofxWiringPi.h"

class ofApp : public ofBaseApp{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);



		bool LEDstate1;		//stores the state of the pin
		int LEDpin1;			//the pin number for the LED
		bool LEDstate2;		//stores the state of the pin
		int LEDpin2;			//the pin number for the LED
		bool LEDstate3;		//stores the state of the pin
		int LEDpin3;			//the pin number for the LED
		int seconds;		//value to store system seconds
		int sensor1;
		int sensor2;
		int sensor3;
};
