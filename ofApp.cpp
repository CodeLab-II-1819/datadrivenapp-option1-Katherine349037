#include "ofApp.h"
#include <iostream>

//--------------------------------------------------------------
void ofApp::setup(){
	
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(255, 255, 255);
	ofSetColor(29, 161, 242);
	ofDrawRectangle(10, 10, 100, 100); 
	ofDrawRectangle(10, 150, 200, 400);
	ofDrawRectangle(230, 10, 600, 100);
	ofDrawRectangle(230, 150, 600, 400);
	ofSetColor(0, 0, 0);

	ofDrawBitmapString("Output", 250, 190);
	ofDrawBitmapString("Icon", 40, 40);
	ofDrawBitmapString("Trending topics", 25, 190);
	ofDrawBitmapString("#Paris", 25, 210);
	ofDrawBitmapString("#Dreamworks", 25, 230);
	ofDrawBitmapString("#Uber", 25, 250);
	ofDrawBitmapString("Politics", 25, 270);
	ofDrawBitmapString("#Money", 25, 290);
	ofDrawBitmapString("#London", 25, 310);
	ofDrawBitmapString("#Barbados", 25, 330);
	ofDrawBitmapString("#Rogue", 25, 350);
	ofDrawBitmapString("#FirstLook", 25, 370);
	ofDrawBitmapString("#Stay", 25, 390);
	ofDrawBitmapString("Search - ", 25, 410);
	ofDrawBitmapString("Home", 250, 40);
	ofDrawBitmapString("Moments", 350, 40);
	ofDrawBitmapString("Notifications", 450, 40);
	ofDrawBitmapString("Messages", 600, 40);
	ofDrawBitmapString("Date __/__/____ - Time 00:00", 250, 80);

	myFont.drawString("Hello", 400, 400);

}

