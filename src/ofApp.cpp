#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    halfDis = distance*(boxNum - 1)/2;
    
    ofBackground(50);
    
    ofSetFrameRate(30);
    glEnable(GL_DEPTH_TEST);
    
}

//--------------------------------------------------------------
void ofApp::update(){

    
}

//--------------------------------------------------------------
void ofApp::draw(){

    camera.begin();

    ofRotateXDeg(angleX);
    ofRotateZDeg(angleZ);
    
    for (int z = 0; z < boxNum; ++z)
    {
        for (int angle = 0; angle < 360; angle +=15)
        {
            for (int i = 0; i < boxNum; ++i)
            {
                ofPushMatrix();
                
                float x =  i * (radius + i * 1.5f) * cos(ofDegToRad(angle));
                float y = -i * (radius + i * 1.5f) * sin(ofDegToRad(angle));
                
                float saturation = float(i) / float(boxNum - 1);
                float brigtness  = float(z) / float(boxNum - 1);
                
                ofTranslate(x, y, 1.4*z * distance - halfDis);
                ofRotateZDeg(-angle);
                
                color.setHsb(angle / 360.f, saturation, brigtness);
                
                ofSetColor(color);
                ofDrawBox(boxSize + boxSize * i, boxSize + boxSize * i, boxSize + boxSize * i);
                
                ofPopMatrix();
            }
        }
    }
    // darw axis
    ofDrawAxis(300.0f);
    //ofDrawGridPlane(10.0f, 100, true);
    // draw arrow
    ofSetColor(0, 0, 255);
    ofVec3f arrowTailPoint (0,0,0);
    ofVec3f arrowHeadPoint (0,0,300);
    ofDrawArrow(arrowTailPoint, arrowHeadPoint, 5.0);
    ofSetColor(255, 0, 0);
    ofVec3f arrowTailPointx (0,0,0);
    ofVec3f arrowHeadPointx (300,0,0);
    ofDrawArrow(arrowTailPointx, arrowHeadPointx, 5.0);
    ofSetColor(0, 255, 0);
    ofVec3f arrowTailPointy (0,0,0);
    ofVec3f arrowHeadPointy (0,300,0);
    ofDrawArrow(arrowTailPointy, arrowHeadPointy, 5.0);
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
