#pragma once 

enum Digit {ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE};

enum Operation {PLUS, SUBTRACTION, MULTIPLICATION, DIVISION, SQUARE_ROOT, PERCENTAGE};

enum Control {ON_CLEAR, MRC, MSUB, MPLUS};

class Display
{

    public:

        void add (Digit digit);

        void clear ();
    
};

class CPU
{

    Display* display;

    public:

        void setDiplay (Display* display);

        void receiveDigit (Digit digit); 

        void receiveOperation (Operation operation);

        void receiveControl (Control control);

};

class Key;

class Keyboard
{

    CPU* cpu;

    Key* keys [200];

    char KeysCount;

    public:

        void setCpu (CPU cpu);  

        void addKey (Key* keys);

        void receiveDigit (Digit digit);

        void receiveOperation (Operation operation);

        void receiveControl (Control control);

};

class Key
{

    protected: 

        Keyboard* keyboard;
    
    public:
        
        virtual void press () = 0;

        void setKeyBoard (Keyboard* keyboard);

};

class KeyDigit : public Key
{

    Digit digit;

    public:

        KeyDigit (Digit digit);

        void press ();

};

class KeyOperation : public Key
{

    Operation operation;

    public: 

        KeyOperation (Operation operation);

        void press ();

};

class KeyControl : public Key
{

    Control control;

    public:

        KeyControl (Control control);

        void press ();

};

class Calculator
{

    CPU* cpu;

    Display* display;

    Keyboard* keyboard;

};


