

#include "Pocion.h"
#include "Sprite.hpp"
#include "Personaje.hpp"


    Pocion::Pocion(std::string t, int x, int y){
        
        if(t=="v"){
            tipo= "vida";
            tamanyo=30;
            posX=x;
            posY=y;
            
            
            int coord[4]={0, 0, 68, 56};
            int f=1;
            std::string ruta("resources/vida.png");
            spritepocion = new Sprite(ruta, coord, f);
            spritepocion->set_position(x, y);
            
        }
        else if(t=="m"){
            tipo="mana";
            tamanyo=20;
            posX=x;
            posY=y;
            
            int coord[4]={0, 0, 68, 56};
            int f=1;
            std::string ruta("resources/mana.png");
            spritepocion = new Sprite(ruta, coord, f);
            spritepocion->set_position(x, y);
            
        }

    }
    
  /* void Pocion::recupera(Personaje p){
       
       int sumvida;
       int summana;
      
        if(this->getTipo()=="vida"){
            if (p.getVida()+this->getTamanyo()>p.getVidaMax()){
                p.setVida(p.getVidaMax());
                this->deletePocion();
                
                //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
                std::cout<<"Has usado una pocion de vida, tu vida es:"<<p.getVida();
                std::cout<<"Te quedan "<<p.numeroPoc()<<" pociones en el bolsillo.";
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
                
            }
            else if (p.getVida()+this->getTamanyo()<p.getVidaMax()){
                sumvida=p.getVida()+this->getTamanyo();
                p.setVida(sumvida);
                this->deletePocion();
                
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
                std::cout<<"Has usado una pocion de vida, tu vida es:"<<p.getVida();
                std::cout<<"Te quedan "<<p.numeroPoc()<<" pociones en el bolsillo.";
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
            }
            else{
                p.setVida()=p.getVida();
            }
        }
        else if(this->getTipo()=="mana"){
             if (p.getMana()+this->getTamanyo()>p.getManaMax()){
                p.setMana(p.getManaMax());
                this->deletePocion();
                
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
                std::cout<<"Has usado una pocion de mana, tu mana es:"<<p.getMana();
                std::cout<<"Te quedan "<<p.numeroPoc()<<" pociones en el bolsillo.";
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
            }
             else if (p.getMana()+this->getTamanyo()<p.getManaMax()){
                summana=p.getMana()+this->getTamanyo();
                p.setMana();
                this->deletePocion();
                
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
                std::cout<<"Has usado una pocion de mana, tu mana es:"<<p.getMana();
                std::cout<<"Te quedan "<<p.numeroPoc()<<" pociones en el bolsillo.";
                 //EXCLUSIVO DE ESTE ENTREGABLE, ES PARA PROBAR
            }
            else{
                p.setMana()=p.getMana();
            }
        }
        
    }*/
    
    
    int Pocion::getTamanyo(){
        return tamanyo;
    }
    
    std::string Pocion::getTipo(){
        return tipo;
    }
    
    Sprite* Pocion::getSprite(){
        return spritepocion;
    }
    
    void Pocion::deletePocion(){     
        delete this;
    }
    