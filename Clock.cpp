/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Clock.cpp
 * Author: adrian
 * 
 * Created on 21 de marzo de 2017, 14:43
 */

#include "Clock.hpp"

Clock::Clock() {
    
}

int32_t Clock::restart() {
    return clock.restart().asMilliseconds();
}

int32_t Clock::getTime() {
    return clock.getElapsedTime().asMilliseconds();
}