#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 255, 255);
    points[0].x = 400; points[0].y = 300;
    points[1].x = 600; points[1].y = 300;
    points[2].x = 600; points[2].y = 500;
    points[3].x = 400; points[3].y = 500;
    
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0, 0, 0);
    ofDrawBitmapString("Press 1, 2, 3 or 4 then move it!", 380, 700);
    
    
    ofSetColor(0,0,0);
    //ofDrawRectangle(400, 300, 200, 200);
    rectangleTexture.draw(points[0], points[1], points[2], points[3]);
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    if (key == '1') {
        cornerIndex = 0;
    }
    if (key == '2') {
        cornerIndex = 1;
    }
    if (key == '3') {
        cornerIndex = 2;
    }
    if (key == '4') {
        cornerIndex = 3;
    }
    if (key == OF_KEY_LEFT){
        points[cornerIndex].x -= 30;
    }
    if (key == OF_KEY_RIGHT){
        points[cornerIndex].x += 30;
    }
    if (key == OF_KEY_UP){
        points[cornerIndex].y -= 30;
    }
    if (key == OF_KEY_DOWN){
        points[cornerIndex].y += 30;
    }

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
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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
