#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    ofSetVerticalSync(true);
    ofBackground(0);
    fft.setup(pow(2.0, 12.0));
}

//--------------------------------------------------------------
void ofApp::update(){
    fft.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    vector<float> buffer;
    buffer = fft.getBins();
    
    float width = float(ofGetWidth() / 2) / float(buffer.size());
    
    ofTranslate(ofGetWidth() / 2, 0);
    
    for (int i = 0; i < buffer.size(); i++) {
        float x = i * width;
        float value = buffer[i] * 100000;
        ofSetColor(value, value * 0.2, value, 255);
        ofDrawRectangle(x, 0, width, ofGetHeight());
    }
    
    for (int i = 0; i < buffer.size(); i++) {
        float x = -i * width;
        float value = buffer[i] * 100000;
        ofSetColor(value, value * 0.2, value, 255);
        ofDrawRectangle(x, 0, width, ofGetHeight());
    }
}

//--------------------------------------------------------------
void ofApp::exit(){
    
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
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){
    
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
