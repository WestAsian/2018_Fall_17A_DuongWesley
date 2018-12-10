/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Card.h
 * Author: Wesley Duong
 *
 * Created on October 21, 2018, 10:24 PM
 */

#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>

using namespace std;

/*vector<ActionCard> kingdomCards({&Cellar(),
                            Chapel(),
                            Moat(),
                            cur_Chancellor(),
                            Village(),
                            Woodcutter(),
                            Workshop(),
                            Bureaucrat(),
                            Feast(),
                            Gardens(),
                            Militia(),
                            Moneylender(),
                            Remodel(),
                            Smithy(),
                            Spy(),
                            Thief(),
                            ThroneRoom(),
                            CouncilRoom(),
                            Festival(),
                            Laboratory(),
                            Library(),
                            Market(),
                            Mine(),
                            Witch(),
                            Adventurer()});*/

class Card {
    public:
        bool operator==(const Card &other) const;
        string getName();
        int getCost();
        string name; // card name

        friend ostream& operator<<(ostream &out, const Card &card);
    protected:
        int cost; // cards cost in coin
};

/* The following classes are the abstract classes for the card types */
class TerritoryCard : public Card {
    public:
        int getPoints();
    protected:
        int points; // card value in points
};

class MoneyCard : public Card {
    public:
        int getCoins();
    protected:
        int coins; // card value in coin
};

class ActionCard : public Card {
    public:
        virtual void action(); // method which performs the card action
        void printDescription(); // method to print the card description
    protected:
};

class AttackCard : public ActionCard {};

/* This section contains all the basic Money Cards */
class Copper : public MoneyCard {
    public:
        Copper();
};

class Silver : public MoneyCard {
    public:
        Silver();
};

class Gold : public MoneyCard {
    public:
        Gold();
};

/* This section contains all the basic Territory Cards */
class Estate : public TerritoryCard {
    public:
        Estate();
};

class Dutchie : public TerritoryCard {
    public:
        Dutchie();
};

class Province : public TerritoryCard {
    public:
        Province();
};

class Curse : public TerritoryCard {
    public:
        Curse();
        void printDescription();
        void action();
};

/* This section contains all the basic Action Cards */
class Cellar : public ActionCard {
    public:
        Cellar();
        void printDescription();
        void action();
};

class Chapel : public ActionCard {
    public:
        Chapel();
        void printDescription();
        void action();
};

class Moat : public ActionCard {
    public:
        Moat();
        void printDescription();
        void action();
};

class Chancellor : public ActionCard {
    public:
        Chancellor();
        void printDescription();
        void action();
};

class Village : public ActionCard {
    public:
        Village();
        void printDescription();
        void action();
};

class Woodcutter : public ActionCard {
    public:
        Woodcutter();
        void printDescription();
        void action();
};

class Workshop : public ActionCard {
    public:
        Workshop();
        void printDescription();
        void action();
};

class Bureaucrat : public AttackCard {
    public:
        Bureaucrat();
        void printDescription();
        void action();
};

class Feast : public ActionCard {
    public:
        Feast();
        void printDescription();
        void action();
};

class Gardens : public TerritoryCard {
    public:
        Gardens();
        void printDescription();
        void action();
};

class Militia : public AttackCard {
    public:
        Militia();
        void printDescription();
        void action();
};

class Moneylender : public ActionCard {
    public:
        Moneylender();
        void printDescription();
        void action();
};

class Remodel : public ActionCard {
    public:
        Remodel();
        void printDescription();
        void action();
};

class Smithy : public ActionCard {
    public:
        Smithy();
        void printDescription();
        void action();
};

class Spy : public AttackCard {
    public:
        Spy();
        void printDescription();
        void action();
};

class Thief : public AttackCard {
    public:
        Thief();
        void printDescription();
        void action();
};

class ThroneRoom : public ActionCard {
    public:
        ThroneRoom();
        void printDescription();
        void action();
};

class CouncilRoom : public AttackCard {
    // only an attack to have access to other players (moat should not block)
    public:
        CouncilRoom();
        void printDescription();
        void action();
};

class Festival : public ActionCard {
    public:
        Festival();
        void printDescription();
        void action();
};

class Laboratory : public ActionCard {
    public:
        Laboratory();
        void printDescription();
        void action();
};

class Library : public ActionCard {
    public:
        Library();
        void printDescription();
        void action();
};

class Market : public ActionCard {
    public:
        Market();
        void printDescription();
        void action();
};

class Mine : public ActionCard {
    public:
        Mine();
        void printDescription();
        void action();
};

class Witch : public AttackCard {
    public:
        Witch();
        void printDescrption();
        void action();
};

class Adventurer : public ActionCard {
    public:
        Adventurer();
        void printDescription();
        void action();
};

#endif /* CARD_H */

