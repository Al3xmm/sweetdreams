#ifndef POCION_H
#define POCION_H

#include "Personaje.hpp"
#include <iostream>
#include "Sprite.hpp"


class Pocion{
    
    private:
    
        std::string tipo;
        
        int tamanyo;
        
        int posY;
        
        int posX;
        
        Sprite *spritepocion;
    
        
    
    public:
    
        Pocion(std::string t, int x, int y);
        
        //void recupera(Personaje p);
        
        int getTamanyo();
        
        std::string getTipo();
  
        
        Sprite* getSprite();
        
        void deletePocion();
        
        sf::FloatRect getPosicion();
        
            
};

#endif
