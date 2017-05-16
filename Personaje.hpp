/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Personaje.hpp
 * Author: adrian
 *
 * Created on 17 de marzo de 2017, 17:15
 */

#ifndef PERSONAJE_HPP
#define PERSONAJE_HPP

#include "Sprite.hpp"
#include <SFML/Graphics.hpp>
#include "Pocion.h"

class Personaje {
public:
    Personaje(int id);
    Sprite* render(int est);
    void move(int i);
    int getDireccion();
    int getXCoordinate();
    int getYCoordinate();
    int getVidaMax();
    int getManaMax();
    int getVida();
    int getMana();
    void setMana(int i);
    void setVida(int i);
    //void usaPocion(std::string tipo);
    //bool cogeObjeto();
    //int numeroPoc();
    
    void aumentarMargenDer(int i);
    void aumentarMargenIzq(int i);
    
private:
    Sprite *idle;
    Sprite *idleleft;
    Sprite *moveright;
    Sprite *moveleft;
    
    int vida;
    int mana;
    int vidamax;
    int manamax;
    
    //Pocion bolsilloP[5];
    int x, y;
    float sx, sy;
    
    int direccion;
    
    int margen;
};

#endif /* PERSONAJE_HPP */

