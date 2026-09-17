#include "flight.h"

bool Flight::bookseat()
{
    if (seats > 0)
    {
        seats--;
        return true;
    }

    return false;
}
