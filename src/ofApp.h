#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		
    ofFloatColor color;
    
    int boxNum = 8;
    int angleX = -50;
    int angleZ = 0;
    
    float boxSize = 4.f;
    float distance = 28.f;
    float halfDis = 0.f;
    float radius = 14.f;
    
    ofEasyCam camera;
    float step,steps;
    
    ofMesh mesh;
};
