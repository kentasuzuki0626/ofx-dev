#ifndef _OFX_TOUCH_APP_RUNNER
#define _OFX_TOUCH_APP_RUNNER


#include "ofMain.h"
#include "ofSimpleApp.h"
#include "ofGraphics.h"
#include "ofMath.h"
#include "ofUtils.h"

#include "ofxTouchApp.h"




//void ofExitCallback();


void 		ofSetupOpenGL(int w, int h, int screenMode);			// sets up the opengl context!
void        ofxRunTouchApp(ofxTouchApp * OFSA);

//-------------------------- time
float 		ofGetFrameRate();
void 		ofSetFrameRate(int targetRate);
void		ofSleepMillis(int millis);
//-------------------------- cursor
void 		ofHideCursor();
void 		ofShowCursor();
//-------------------------- window / screen
int 		ofGetWindowPositionX();
int 		ofGetWindowPositionY();
int 		ofGetScreenWidth();
int 		ofGetScreenHeight();
int			ofGetWindowMode();	
int 		ofGetWidth();			// <-- should we call this ofGetWindowWidth?
int 		ofGetHeight();

void 		ofSetWindowPosition(int x, int y);
void 		ofSetWindowShape(int width, int height);
void 		ofSetWindowTitle(string title);
void		ofSetFullscreen(bool fullscreen);
void		ofToggleFullscreen();
//-------------------------- sync					
void 		ofSetVerticalSync(bool bSync);


#endif