#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    remote = new ofxAppleRemote;
}
ofApp::~ofApp(){
    
    delete remote;
    
    
}

//--------------------------------------------------------------
void ofApp::update(){

}


//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(0);
    switch (remote->getKey()) {
        case appleRemoteKey_nil:
            ofDrawBitmapString(".....", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyPlus:
            ofDrawBitmapString("appleRemoteKeyPlus", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyMinus:
            ofDrawBitmapString("appleRemoteKeyMinus", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyMenu:
            ofDrawBitmapString("appleRemoteKeyMenu", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyPlay:
            ofDrawBitmapString("appleRemoteKeyPlay", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyRight:
            ofDrawBitmapString("appleRemoteKeyRight", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyLeft:
            ofDrawBitmapString("appleRemoteKeyLeft", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyPlus_Hold:
            ofDrawBitmapString("appleRemoteKeyPlus_Hold", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyMinus_Hold:
            ofDrawBitmapString("appleRemoteKeyMinus_Hold", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyMenu_Hold:
            ofDrawBitmapString("appleRemoteKeyMenu_Hold", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyPlay_Hold:
            ofDrawBitmapString("appleRemoteKeyPlay_Hold", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyRight_Hold:
            ofDrawBitmapString("appleRemoteKeyRight_Hold", ofGetWidth()/2, ofGetHeight()/2);
            break;
        case appleRemoteKeyLeft_Hold:
            ofDrawBitmapString("appleRemoteKeyLeft_Hold", ofGetWidth()/2, ofGetHeight()/2);
            break;
        default:
            break;
    }
    
    
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
