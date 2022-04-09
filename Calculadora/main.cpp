#include "calculadora.h"

int main ()
{

    Keyboard k1;

    KeyDigit key0 (ZERO), key1 (ONE), key2 (TWO), key3 (THREE), key4 (FOUR), key5 (FIVE), key6 (SIX), key7 (SEVEN), key8 (EIGHT), key9 (NINE);

    k1.addKey (&key0);

    k1.addKey (&key1);

    k1.addKey (&key3);

    key1.press ();

    key1.press ();

    key0.press ();

    return 1;

}