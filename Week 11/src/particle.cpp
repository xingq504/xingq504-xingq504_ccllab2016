//
//  particle.cpp
//  Week10Class
//
//  Created by Qinwen Xing on 11/1/16.
//
//

#include "particle.h"

// initializing constructior, and initializing the variables inside of it
particle::particle(ofVec2f position) : mPosition(position), mSpeed(ofRandom(-2.0f, 2.0f), ofRandom(-2.0f, 2.0f)), mDirection(ofVec2f(0)), mLifeSpan(255.f) { };

// update function
void particle::update(float multiplier){
    //apply acceleration to velocity
    mSpeed += mDirection;
    mPosition += mSpeed * multiplier;

    // decrease life span
    if (mLifeSpan > 0){
        mLifeSpan -= 2.f;
    }
}


// draw function
void particle::draw(){
    if (mLifeSpan > 150){
        // make it brighter
        ofSetColor(mLifeSpan);
    }else if (mLifeSpan <= 150){
        // make it randomly fade
        ofSetColor(51,51,255); //ofSetColor(r,g,b);
    }
    
    // if particle is closer, it's smaller
    ofDrawCircle(mPosition, 3.f * ofMap(mLifeSpan, 0, 255.f, 0, 1.f));

}


// apply force function
void particle::applyForce(ofVec2f force){
    mDirection += force; // mAcceleration += force
    
    
}



// reset forces
void particle::resetForces(){
    mDirection *= 0; //mAcceleration *= 0;

}
