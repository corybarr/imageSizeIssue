#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	//orig size is 453 x 512
	image.loadImage("riley.jpg");

	//image.resize(453 * 2, 512 * 2); //broken
	//image.resize(454, 512); //broken
	image.resize(454 * 2, 512 * 2); //works
	//image.resize(1024, 1021);//works
	//image.resize(1920, 1080); //works
	if (true) {
		ofPixels pixels;
		image.getTextureReference().readToPixels(pixels);
	}
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	image.draw(0, 0);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

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
