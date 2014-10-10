#include "ofApp.h"
#include "wiringPi.h"
//--------------------------------------------------------------
void ofApp::setup(){
	ofBackground(0,0,0);
	wiringPiSetup();

	LEDstate1 = true;
	LEDstate2 = true;
	LEDstate3 = true;
	sensor1 = 8;
	sensor2 = 9;
	sensor3 = 7;
	pinMode (sensor1, INPUT);
	pinMode (sensor2, INPUT);
}

//--------------------------------------------------------------
void ofApp::update(){
	if (digitalRead(sensor1)){
		ofLog() << "button1";
		LEDstate1 = true;
	} else{
		ofLog() << "no button1";
		LEDstate1 = false;
	}
	if (digitalRead(sensor2)){
		ofLog() << "button2";
		LEDstate2 = true;
	} else{
		ofLog() << "no button2";
		LEDstate2 = false;
	}
		if (digitalRead(sensor3)){
		ofLog() << "button3";
		LEDstate2 = true;
	} else{
		ofLog() << "no button3";
		LEDstate2 = false;
	}

	
}

//--------------------------------------------------------------
void ofApp::draw(){

	if (LEDstate1 == false){
		ofSetColor(104, 129, 84);
		ofCircle(50,50,30);
	}

	if (LEDstate2 == false){
		ofSetColor(65, 82, 154);
		ofCircle(0, 0, 100, 100);
	}
	if (LEDstate3 == false){
		ofSetColor(33, 53, 133);
		ofCircle(0, 0, 100, 100);
	}
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(sensor3){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}