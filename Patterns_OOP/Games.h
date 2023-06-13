#pragma once
#include "TypesOfGames.h"

class IGames
{
public:
    virtual void PlayInGame() = 0;
};

class Games : public IGames
{
protected:
    TypesOfGames* typegame;

public:

    Games()
    {
        typegame = NULL;
    }

    Games(TypesOfGames* typegame1)
    {
        typegame = typegame1;
    }

    void SetTypeGame(TypesOfGames* typegame1)
    {
        typegame = typegame1;
    }

    virtual void PlayInGame()
    {
        int type = -1;
        if (typegame != NULL)
        {
            cout << "“ип игры: ";
            type = typegame->DisplayTypeOfGame();
            cout << endl;
        }

        if (type == 1)
        {
            cout << endl;
            cout << "–ебЄнок играет!" << endl;
            cout << "                                         " << endl;
            cout << "   *********        *         ****       " << endl;
            cout << "   *       *       * *       *    *      " << endl;
            cout << "   *       *      *   *     *      *     " << endl;
            cout << "   *       *     *     *     *    *      " << endl;
            cout << "   *********    *********     ****       " << endl;
            cout << "                                         " << endl;
            cout << endl;
            Sleep(1000);
        }
        else
            if (type == 0)
            {
                cout << "                                                                              " << endl;
                cout << "               **                                                             " << endl;
                cout << "             *  *                                                             " << endl;
                cout << "          *     *                            * * * * * * * * * * *            " << endl;
                cout << "       *        *            /                *                 *   *         " << endl;
                cout << "    *           *           /                  *                 *     *      " << endl;
                cout << "    *           *          *===========         *                 *      *    " << endl;
                cout << "    *           *           \\                    *                 *       *  " << endl;
                cout << "    *         *              \\                    *                 *     *   " << endl;
                cout << "    *       *                                       * * * * * * * * * *  *     " << endl;
                cout << "    *    *                                                                    " << endl;
                cout << "    * *                                                                       " << endl;
                Sleep(1000);
            }

    }
};

