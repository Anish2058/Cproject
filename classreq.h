#include <SFML/Graphics.hpp>
#include <iostream>
#include<sstream>
#include<string>

using namespace std;

class text_box{
public:
    sf::RectangleShape rect;
    sf::Text text;
    sf::Font font;
    text_box(){
    }
    void create_rectangle(int a,int b,int c,int d,sf::Color colore){
        sf::Vector2f rectanglePosition(a,b);
        rect.setPosition(rectanglePosition);
        rect.setSize(sf::Vector2f(c,d));
        rect.setFillColor(colore);
    }
    void create_text(int a,int b,int c,string sc,sf::Color colorel){
    if(!font.loadFromFile("KeepSinging-ao1K.ttf")){
    }
        sf::Vector2f textPosition(a,b);
        text.setPosition(textPosition);
        text.setFont(font);
        text.setString(sc);
        text.setColor(colorel);
        text.setCharacterSize(c);
    }

};



