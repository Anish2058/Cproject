#include <SFML/Graphics.hpp>
#include <iostream>
#include<sstream>
#include<string>
#include<stdlib.h>
#include"classreq.h"
// #include"gotti.h"



void new_game();
void settings();
void Exit_game();
void Main_page();
int main(){
    text_box t1,t2,t3;
    sf::RenderWindow window(sf::VideoMode(1200,600),"LUDO GAME",sf::Style::Titlebar|sf::Style::Close);
    window.setFramerateLimit(60);
    t1.create_rectangle(0,0,1200,100,sf::Color::White);
    t1.create_text(400,20,40,"LUDO GAME PROJECT",sf::Color::Red);
    t2.create_text(20,200,30," 1. ANISH\tTIMSINA\n\n 2. ASHIM\tPANTHI\n\n 3. BISHAL\tKHADKA\n\n 4.KHAGENDRA\tRAJ\tJOSHI",sf::Color::Blue);
    t3.create_text(600,300,40,"CLICK HERE TO START",sf::Color::Blue);
    t3.create_rectangle(600,300,500,50,sf::Color::White);
    while(window.isOpen())
    {
         sf::Event event;
         while(window.pollEvent(event))
         {
             if(event.type==sf::Event::Closed)
                window.close();

         }
         window.clear();
         window.draw(t1.rect);
         window.draw(t1.text);
         window.draw(t2.text);
         window.draw(t3.text);
         sf::Vector2i mousepos = sf::Mouse::getPosition();
         if((mousepos.x>=700 && mousepos.x<=900) && (mousepos.y>=400 && mousepos.y<=500))
            {
                window.draw(t3.rect);
                window.draw(t3.text);
            }
            window.display();
            if((mousepos.x>=700 && mousepos.x<=900) && (mousepos.y>=400 && mousepos.y<=500))
            {
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                    Main_page();
                }
            }
    }
    return 0;
}
void Main_page(){
    text_box t1,t2,t3,t4;
    sf::RenderWindow window(sf::VideoMode(1200,600),"LUDO GAME",sf::Style::Titlebar|sf::Style::Close);
    window.setFramerateLimit(60);

    t1.create_rectangle(0,0,1200,100,sf::Color::White);
    t2.create_rectangle(20,150,300,50,sf::Color::Red);
    t3.create_rectangle(20,250,300,50,sf::Color::Red);
    t4.create_rectangle(20,350,300,50,sf::Color::Red);
    t1.create_text(400,20,40,"LUDO GAME PROJECT",sf::Color::Red);
    t2.create_text(20,150,40,"New Game",sf::Color::White);
    t4.create_text(20,350,40,"Exit",sf::Color::White);
    while(window.isOpen())
    {
         sf::Event event;
         while(window.pollEvent(event))
         {
             if(event.type==sf::Event::Closed)
                window.close();

         }
         window.clear();
         window.draw(t1.rect);
         window.draw(t1.text);

         window.draw(t2.text);
         window.draw(t4.text);
         sf::Vector2i mousepos = sf::Mouse::getPosition();
         if((mousepos.x>=20 && mousepos.x<=300) && (mousepos.y>=250 && mousepos.y<=320))
            {
                window.draw(t2.rect);
                window.draw(t2.text);
            }
        if((mousepos.x>=20 && mousepos.x<=300) && (mousepos.y>=450 && mousepos.y<=520))
            {
                window.draw(t4.rect);
                window.draw(t4.text);
            }

         window.display();
         if((mousepos.x>=20 && mousepos.x<=300) && (mousepos.y>=250 && mousepos.y<=320))
            {
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                    new_game();
                }
            }
            if((mousepos.x>=20 && mousepos.x<=300) && (mousepos.y>=450 && mousepos.y<=520)){
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left))
                {
                    window.close();
                    Exit_game();
                }
            }
}
}
void Exit_game(){
    exit(0);
}


