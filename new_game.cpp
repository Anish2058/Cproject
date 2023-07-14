#include <SFML/Graphics.hpp>
#include <iostream>
#include<sstream>
#include<string>
#include<stdlib.h>
#include <ctime>
#include<windows.h>
#include"classreq.h"
#include"player.h"
int get_number(){
    srand(time(NULL));
    int result=0;
    int number=6;
    result=rand()%number+1;//gets random number from 1 to 6
    return result;
}
void new_game(){
    Texture number[6];
    Sprite numbersprite[6];


    number[0].loadFromFile("num1.png");
    number[1].loadFromFile("num2.png");
    number[2].loadFromFile("num3.png");
    number[3].loadFromFile("num4.png");
    number[4].loadFromFile("num5.png");
    number[5].loadFromFile("num6.png");
    for(int a=0;a<6;a++){
        Vector2f numberPosition(901, 295);
        numbersprite[a].setTexture(number[a]);
        numbersprite[a].setPosition(numberPosition);
    }
    int num;
    text_box t1,t2;
    t1.create_rectangle(800,100,300,150,sf::Color::White);
    t1.create_text(800,150,40,"ROLL   DICE",sf::Color::Red);
    t2.create_rectangle(901,295,100,100,sf::Color::Black);
    ////t2.create_text(800,300,40, "        0", sf::Color::White);

    player1 one;
    one.gotti4();
    one.gotti1();
    one.gotti2();
    one.gotti3();

    player2 two;
    two.gotti4();
    two.gotti1();
    two.gotti2();
    two.gotti3();

    player3 three;
    three.gotti4();
    three.gotti1();
    three.gotti2();
    three.gotti3();

    player4 four;
    four.gotti4();
    four.gotti1();
    four.gotti2();
    four.gotti3();

    sf::RenderWindow window(sf::VideoMode(1200,600),"LUDO GAME",sf::Style::Titlebar|sf::Style::Close);
    window.setFramerateLimit(60);

    /*sf::Texture dice;
    dice.loadFromFile("dice.png");
    sf::Vector2f dicePosition(800,100);
    sf::Sprite dicer(dice);
    dicer.setPosition(dicePosition);
*/
    sf::Texture board;
    board.loadFromFile("board1i.png");
    sf::Sprite board1s(board);
    sf::Vector2f boardPosition(100,0);
    board1s.setPosition(boardPosition);

    bool isMove[16]={false};
    float dx=0, dy =0;

    while(window.isOpen())
    {
        // window.clear(sf::Color::Magenta);
         sf::Vector2i pos = Mouse::getPosition(window);
         sf::Event event;
         while(window.pollEvent(event))
         {
             if(event.type==sf::Event::Closed)
                window.close();
         }

         ////drag and drop////
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(one.gottisprite[0].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[0] = true;
                          dx=pos.x - one.gottisprite[0].getPosition().x;
                          dy=pos.y - one.gottisprite[0].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(one.gottisprite[1].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[1] = true;
                          dx=pos.x - one.gottisprite[1].getPosition().x;
                          dy=pos.y - one.gottisprite[1].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(one.gottisprite[2].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[2] = true;
                          dx=pos.x - one.gottisprite[2].getPosition().x;
                          dy=pos.y - one.gottisprite[2].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(one.gottisprite[3].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[3] = true;
                          dx=pos.x - one.gottisprite[3].getPosition().x;
                          dy=pos.y - one.gottisprite[3].getPosition().y;
                        }

            //two player
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(two.gottisprite[0].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[4] = true;
                          dx=pos.x - two.gottisprite[0].getPosition().x;
                          dy=pos.y - two.gottisprite[0].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(two.gottisprite[1].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[5] = true;
                          dx=pos.x - two.gottisprite[1].getPosition().x;
                          dy=pos.y - two.gottisprite[1].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(two.gottisprite[2].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[6] = true;
                          dx=pos.x - two.gottisprite[2].getPosition().x;
                          dy=pos.y - two.gottisprite[2].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(two.gottisprite[3].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[7] = true;
                          dx=pos.x - two.gottisprite[3].getPosition().x;
                          dy=pos.y - two.gottisprite[3].getPosition().y;
                        }


        ///player threee
        if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(three.gottisprite[0].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[8] = true;
                          dx=pos.x - three.gottisprite[0].getPosition().x;
                          dy=pos.y - three.gottisprite[0].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(three.gottisprite[1].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[9] = true;
                          dx=pos.x - three.gottisprite[1].getPosition().x;
                          dy=pos.y - three.gottisprite[1].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(three.gottisprite[2].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[10] = true;
                          dx=pos.x - three.gottisprite[2].getPosition().x;
                          dy=pos.y - three.gottisprite[2].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(three.gottisprite[3].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[11] = true;
                          dx=pos.x - three.gottisprite[3].getPosition().x;
                          dy=pos.y - three.gottisprite[3].getPosition().y;
                        }



        // player four
        if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(four.gottisprite[0].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[12] = true;
                          dx=pos.x - four.gottisprite[0].getPosition().x;
                          dy=pos.y - four.gottisprite[0].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(four.gottisprite[1].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[13] = true;
                          dx=pos.x - four.gottisprite[1].getPosition().x;
                          dy=pos.y - four.gottisprite[1].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(four.gottisprite[2].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[14] = true;
                          dx=pos.x - four.gottisprite[2].getPosition().x;
                          dy=pos.y - four.gottisprite[2].getPosition().y;
                        }
            if(event.type == Event::MouseButtonPressed)
                if(event.key.code == Mouse::Left)
                    if(four.gottisprite[3].getGlobalBounds().contains(pos.x, pos.y))
                        {
                          isMove[15] = true;
                          dx=pos.x - four.gottisprite[3].getPosition().x;
                          dy=pos.y - four.gottisprite[3].getPosition().y;
                        }


            if(event.type==Event::MouseButtonReleased)
                if(event.key.code == Mouse::Left){
                    isMove[0]=0;
                    isMove[1]=0;
                    isMove[2]=0;
                    isMove[3]=0;
                    isMove[4]=0;
                    isMove[5]=0;
                    isMove[6]=0;
                    isMove[7]=0;
                    isMove[8]=0;
                    isMove[9]=0;
                    isMove[10]=0;
                    isMove[11]=0;
                    isMove[12]=0;
                    isMove[13]=0;
                    isMove[14]=0;
                    isMove[15]=0;
                }

            for(int i=0; i<16; i++){
            if(isMove[i]){
                  if(i<4){
                    one.gottisprite[i].setPosition(pos.x-dx,pos.y-dy);
                }
                  else if(i>=4 && i<8){
                    two.gottisprite[i-4].setPosition(pos.x-dx,pos.y-dy);
                }
                else if(i>=8 && i<12){
                    three.gottisprite[i-8].setPosition(pos.x-dx,pos.y-dy);
                }
                else if(i>=12 && i<16){
                    four.gottisprite[i-12].setPosition(pos.x-dx,pos.y-dy);
                }
                /*if(i=7){
                    two.gottisprite[3].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=8){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=9){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=10){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=11){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=12){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=13){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=14){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }
                if(i=15){
                    two.gottisprite[1].setPosition(pos.x-dx,pos.y-dy);
                }*/
            }
            }

            if(pos.x>=802 && pos.x<=1100  &&  pos.y>=100 && pos.y<=250){
                if(sf::Mouse::isButtonPressed(sf::Mouse::Left)){
                    num=get_number();
                    window.draw(t2.rect);


                         switch(num){
                        case 1:
                            //t2.create_text(800,300,40,"        1",sf::Color::White);
                            //window.draw(t2.rect);
                            window.draw(numbersprite[0]);
                            break;
                        case 2:
                            //t2.create_text(800,300,40,"        2",sf::Color::White);
                            //window.draw(t2.rect);
                            window.draw(numbersprite[1]);
                            break;
                        case 3:
                            //t2.create_text(800,300,40,"        3",sf::Color::White);
                            //window.draw(t2.rect);
                            window.draw(numbersprite[2]);
                            break;
                        case 4:
                            //t2.create_text(800,300,40,"        4",sf::Color::White);
                            //window.draw(t2.rect);
                            window.draw(numbersprite[3]);
                            break;
                        case 5:
                            //t2.create_text(800,300,40,"        5",sf::Color::White);
                            //window.draw(t2.rect);
                            window.draw(numbersprite[4]);
                            break;
                        default:
                            //t2.create_text(800,300,40,"        6",sf::Color::White);
                            //window.draw(t2.rect);
                            window.draw(numbersprite[5]);
                            break;
                        }

                    }
                }
         //std::cout<<pos.x<<endl<<pos.y<<endl;
         //if((mousepos.x>=890 && mousepos.x<=1090) && (mousepos.y>=320 && mousepos.y<=475))
        // window.clear(sf::Color::Magenta);
         window.draw(t1.rect);
         window.draw(t1.text);
         window.draw(board1s);

         window.draw(one.gottisprite[1]);
         window.draw(one.gottisprite[2]);
         window.draw(one.gottisprite[3]);
         window.draw(one.gottisprite[0]);

         window.draw(two.gottisprite[1]);
         window.draw(two.gottisprite[2]);
         window.draw(two.gottisprite[3]);
         window.draw(two.gottisprite[0]);

         window.draw(three.gottisprite[1]);
         window.draw(three.gottisprite[2]);
         window.draw(three.gottisprite[3]);
         window.draw(three.gottisprite[0]);

         window.draw(four.gottisprite[1]);
         window.draw(four.gottisprite[2]);
         window.draw(four.gottisprite[3]);
         window.draw(four.gottisprite[0]);

        window.display();

    }
}



