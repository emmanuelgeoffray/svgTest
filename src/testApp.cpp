#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
	ofSetVerticalSync(true);
  ofEnableAlphaBlending();
  ofSetFrameRate(60);
	
	ofBackground(0);
	ofSetColor(255);
	
	svg.load("flash.svg");
	image.loadImage("flash.png");
}


//--------------------------------------------------------------
void testApp::update(){
	step += 1;
}

//--------------------------------------------------------------
void testApp::draw(){
  float angle;
  if (ofGetMousePressed()){
    angle = mouseX;
  } else {
    angle = step;
  }
	ofDrawBitmapString(ofToString(ofGetFrameRate()),20,20);
	ofPushMatrix();
	ofTranslate(ofGetWidth() / 4, ofGetHeight() / 2);
	ofRotate(angle);
	float scale = ofMap(mouseY, 0, ofGetHeight(), 1, 20);
	ofScale(scale, scale, scale);
  svg.draw();
	
	ofPopMatrix();

	ofPushMatrix();
	ofTranslate(ofGetWidth() * 3 / 4., ofGetHeight() / 2.);
	ofRotate(angle);
	ofScale(scale, scale, scale);
  image.setAnchorPercent(0.5,0.5);
  image.draw(0,0, image.getWidth()/42, image.getHeight()/42);
	ofPopMatrix();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){
  switch (key){
    case 'f':
      ofToggleFullscreen();
      break;
    default:
      break;
  }
	
}

//--------------------------------------------------------------
void testApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y){
	
}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){
	
}
