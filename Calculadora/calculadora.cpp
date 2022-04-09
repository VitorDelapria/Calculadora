#include "calculadora.h"

#include <iostream>

using namespace std;

void Display :: add (Digit digit)
{

    switch (digit)
    {

       case ZERO: cout << "0000\n0  0\n0  0\n0  0\n0000\n"; break;

        case ONE: cout << "  0\n  0\n  0\n  0\n  0\n"; break; 

        case TWO: cout << "0000\n   0\n0000\n0   \n0000\n"; break;
        
        case THREE: cout << "0000\n   0\n0000\n   0\n0000\n"; break;

        case FOUR: cout << "0  0\n0  0\n0000\n   0\n   0\n"; break;

        case FIVE: cout << "0000\n0   \n0000\n   0\n0000\n"; break;

        case SIX: cout << "0000\n0   \n0000\n0  0\n0000\n"; break;

        case SEVEN: cout << "0000\n   0\n   0\n   0\n   0\n"; break;

        case EIGHT: cout << "0000\n0  0\n0000\n0  0\n0000\n"; break;

        case NINE: cout << "0000\n0  0\n0000\n   0\n   0\n"; break;

        default: 

            cout << "ERROR" << endl;    

    }

}

void Display::clear ()
{

    cout << "\n\n\n\n\n";

}

void CPU :: receiveDigit (Digit digit)
{

    this->display ? this->display->add (digit) : void ();

}

void Keyboard :: addKey (Key* key)
{

}

void Keyboard :: receiveDigit (Digit digit)
{

    this->cpu ? this->cpu->receiveDigit (digit) : void ();

};

void Keyboard :: receiveOperation (Operation operation)
{

    this->cpu ? this->cpu->receiveOperation (operation) : void (); 

};

void Keyboard :: receiveControl (Control control)
{

    this->cpu ? this->cpu-> receiveControl (control) : void ();

};

void Key :: setKeyBoard (Keyboard* keyboard)
{

    this->keyboard = keyboard;

}

KeyDigit :: KeyDigit (Digit d) : digit (d) { }

void KeyDigit :: press ()
{

    this->keyboard->receiveDigit (this->digit); 

}

KeyOperation :: KeyOperation (Operation o):operation (o) { }

void KeyOperation :: press ()
{

  this->keyboard->receiveOperation (this->operation);

}

KeyControl :: KeyControl (Control c) : control (c) { }

void KeyControl :: press () 
{
  
  this->keyboard->receiveControl (this->control);

}


