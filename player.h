#include <SFML/Graphics.hpp>
#include <iostream>
#include<sstream>
#include<string>
#include<stdlib.h>

using namespace sf;
using namespace std;

class player1{
public:
    Texture gotti[4];
    Sprite gottisprite[4];

    void gotti1(){
    gotti[1].loadFromFile("gotti1.png");
    Vector2f gottiPosition(200, 415);
    gottisprite[1].setTexture(gotti[1]);
    gottisprite[1].setPosition(gottiPosition);
    }

    void gotti2(){
    gotti[2].loadFromFile("gotti1.png");
    Vector2f gottiPosition1(283,415);
    gottisprite[2].setTexture(gotti[2]);
    gottisprite[2].setPosition(gottiPosition1);
    }

    void gotti3(){
    gotti[3].loadFromFile("gotti1.png");
    Vector2f gottiPosition2(200,490);
    gottisprite[3].setTexture(gotti[3]);
    gottisprite[3].setPosition(gottiPosition2);
    }

    void gotti4(){
    gotti[0].loadFromFile("gotti1.png");
    Vector2f gottiPosition(283,490);
    gottisprite[0].setTexture(gotti[0]);
    gottisprite[0].setPosition(gottiPosition);
    }
};
class player2{
public:
    Texture gotti[4];
    Sprite gottisprite[4];

    void gotti1(){
    gotti[1].loadFromFile("gotti2.png");
    Vector2f gottiPosition(581,415);
    gottisprite[1].setTexture(gotti[1]);
    gottisprite[1].setPosition(gottiPosition);
    }

    void gotti2(){
    gotti[2].loadFromFile("gotti2.png");
    Vector2f gottiPosition1(666,415);
    gottisprite[2].setTexture(gotti[2]);
    gottisprite[2].setPosition(gottiPosition1);
    }

    void gotti3(){
    gotti[3].loadFromFile("gotti2.png");
    Vector2f gottiPosition2(581,490);
    gottisprite[3].setTexture(gotti[3]);
    gottisprite[3].setPosition(gottiPosition2);
    }

    void gotti4(){
    gotti[0].loadFromFile("gotti2.png");
    Vector2f gottiPosition(666,490);
    gottisprite[0].setTexture(gotti[0]);
    gottisprite[0].setPosition(gottiPosition);
    }
};
class player3{
public:
    Texture gotti[4];
    Sprite gottisprite[4];

    void gotti1(){
    gotti[1].loadFromFile("gotti3.png");
    Vector2f gottiPosition(581, 87);
    gottisprite[1].setTexture(gotti[1]);
    gottisprite[1].setPosition(gottiPosition);
    }

    void gotti2(){
    gotti[2].loadFromFile("gotti3.png");
    Vector2f gottiPosition1(581,162);
    gottisprite[2].setTexture(gotti[2]);
    gottisprite[2].setPosition(gottiPosition1);
    }

    void gotti3(){
    gotti[3].loadFromFile("gotti3.png");
    Vector2f gottiPosition2(666,164);
    gottisprite[3].setTexture(gotti[3]);
    gottisprite[3].setPosition(gottiPosition2);
    }

    void gotti4(){
    gotti[0].loadFromFile("gotti3.png");
    Vector2f gottiPosition(666,87);
    gottisprite[0].setTexture(gotti[0]);
    gottisprite[0].setPosition(gottiPosition);
    }
};
class player4{
public:
    Texture gotti[4];
    Sprite gottisprite[4];

    void gotti1(){
    gotti[1].loadFromFile("gotti4.png");
    Vector2f gottiPosition(200, 87);
    gottisprite[1].setTexture(gotti[1]);
    gottisprite[1].setPosition(gottiPosition);
    }

    void gotti2(){
    gotti[2].loadFromFile("gotti4.png");
    Vector2f gottiPosition1(283,162);
    gottisprite[2].setTexture(gotti[2]);
    gottisprite[2].setPosition(gottiPosition1);
    }

    void gotti3(){
    gotti[3].loadFromFile("gotti4.png");
    Vector2f gottiPosition2(200,162);
    gottisprite[3].setTexture(gotti[3]);
    gottisprite[3].setPosition(gottiPosition2);
    }

    void gotti4(){
    gotti[0].loadFromFile("gotti4.png");
    Vector2f gottiPosition(283,87);
    gottisprite[0].setTexture(gotti[0]);
    gottisprite[0].setPosition(gottiPosition);
    }
};

