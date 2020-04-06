//
// Created by fredr on 02.04.2020.
//

#include "Map.h"

Map *Map::instance = nullptr;

Map::Map()
{
    txMap = Screen::loadImage("../data/gfx/hintergrund2.png", -1);
    arrayOfRails.emplace_back(138, 37, 207, 37);
    arrayOfRails.emplace_back(207, 37, 290, 37);
    arrayOfRails.emplace_back(330, 37, 412, 37);
    arrayOfRails.emplace_back(412, 37, 480, 37);
    arrayOfRails.emplace_back(138, 92, 207, 92);
    arrayOfRails.emplace_back(207, 92, 249, 92);
    arrayOfRails.emplace_back(249, 92, 290, 92);
    arrayOfRails.emplace_back(290, 92, 330, 92);
    arrayOfRails.emplace_back(330, 92, 371, 92);
    arrayOfRails.emplace_back(371, 92, 412, 92);
    arrayOfRails.emplace_back(412, 92, 480, 92);
    arrayOfRails.emplace_back(138, 133, 207, 133);
    arrayOfRails.emplace_back(249, 133, 290, 133);
    arrayOfRails.emplace_back(330, 133, 371, 133);
    arrayOfRails.emplace_back(412, 133, 480, 133);
    arrayOfRails.emplace_back(249, 174, 290, 174);
    arrayOfRails.emplace_back(290, 174, 310, 174);
    arrayOfRails.emplace_back(310, 174, 330, 174);
    arrayOfRails.emplace_back(330, 174, 371, 174);
    arrayOfRails.emplace_back(100, 215, 207, 215);  // tunnel left
    arrayOfRails.emplace_back(207, 215, 249, 215);
    arrayOfRails.emplace_back(371, 215, 412, 215);
    arrayOfRails.emplace_back(412, 215, 515, 215);  // tunnel right
    arrayOfRails.emplace_back(249, 257, 371, 257);
    arrayOfRails.emplace_back(138, 298, 207, 298);
    arrayOfRails.emplace_back(207, 298, 249, 298);
    arrayOfRails.emplace_back(249, 298, 290, 298);
    arrayOfRails.emplace_back(330, 298, 371, 298);
    arrayOfRails.emplace_back(371, 298, 412, 298);
    arrayOfRails.emplace_back(412, 298, 480, 298);
    arrayOfRails.emplace_back(138, 339, 166, 339);
    arrayOfRails.emplace_back(207, 339, 249, 339);
    arrayOfRails.emplace_back(249, 339, 290, 339);
    arrayOfRails.emplace_back(290, 339, 330, 339);
    arrayOfRails.emplace_back(330, 339, 371, 339);
    arrayOfRails.emplace_back(371, 339, 412, 339);
    arrayOfRails.emplace_back(452, 339, 480, 339);
    arrayOfRails.emplace_back(138, 380, 166, 380);
    arrayOfRails.emplace_back(166, 380, 207, 380);
    arrayOfRails.emplace_back(249, 380, 290, 380);
    arrayOfRails.emplace_back(330, 380, 371, 380);
    arrayOfRails.emplace_back(412, 380, 452, 380);
    arrayOfRails.emplace_back(452, 380, 480, 380);
    arrayOfRails.emplace_back(138, 421, 290, 421);
    arrayOfRails.emplace_back(290, 421, 330, 421);

    //vertikalt
    arrayOfRails.emplace_back(330, 421, 480, 421);
    arrayOfRails.emplace_back(138, 37, 138, 92);
    arrayOfRails.emplace_back(138, 92, 138, 133);
    arrayOfRails.emplace_back(138, 298, 138, 339);
    arrayOfRails.emplace_back(138, 380, 138, 421);
    arrayOfRails.emplace_back(166, 339, 166, 380);
    arrayOfRails.emplace_back(207, 37, 207, 92);
    arrayOfRails.emplace_back(207, 92, 207, 133);
    arrayOfRails.emplace_back(207, 133, 207, 215);
    arrayOfRails.emplace_back(207, 215, 207, 298);
    arrayOfRails.emplace_back(207, 298, 207, 339);
    arrayOfRails.emplace_back(207, 339, 207, 380);
    arrayOfRails.emplace_back(249, 92, 249, 133);
    arrayOfRails.emplace_back(249, 174, 249, 215);
    arrayOfRails.emplace_back(249, 215, 249, 257);
    arrayOfRails.emplace_back(249, 257, 249, 298);
    arrayOfRails.emplace_back(249, 339, 249, 380);
    arrayOfRails.emplace_back(290, 37, 290, 92);
    arrayOfRails.emplace_back(290, 133, 290, 174);
    arrayOfRails.emplace_back(290, 298, 290, 339);
    arrayOfRails.emplace_back(290, 380, 290, 421);
    arrayOfRails.emplace_back(330, 37, 330, 92);
    arrayOfRails.emplace_back(330, 133, 330, 174);
    arrayOfRails.emplace_back(330, 298, 330, 339);
    arrayOfRails.emplace_back(330, 380, 330, 421);
    arrayOfRails.emplace_back(371, 92, 371, 133);
    arrayOfRails.emplace_back(371, 174, 371, 215);
    arrayOfRails.emplace_back(371, 215, 371, 257);
    arrayOfRails.emplace_back(371, 257, 371, 298);
    arrayOfRails.emplace_back(371, 339, 371, 380);
    arrayOfRails.emplace_back(412, 37, 412, 92);
    arrayOfRails.emplace_back(412, 92, 412, 133);
    arrayOfRails.emplace_back(412, 133, 412, 215);
    arrayOfRails.emplace_back(412, 215, 412, 298);
    arrayOfRails.emplace_back(412, 298, 412, 339);
    arrayOfRails.emplace_back(412, 339, 412, 380);
    arrayOfRails.emplace_back(452, 339, 452, 380);
    arrayOfRails.emplace_back(480, 37, 480, 92);
    arrayOfRails.emplace_back(480, 92, 480, 133);
    arrayOfRails.emplace_back(480, 298, 480, 339);
    arrayOfRails.emplace_back(480, 380, 480, 421);

    // ghost castle
    arrayOfRails.emplace_back(280, 222, 310, 222);  // horizontal, the left one - 1 pixel too short, so it is a one-way outwards
    arrayOfRails.emplace_back(310, 222, 340, 222);  // horizontal, the right one - 1 pixel too short, so it is a one-way outwards
    arrayOfRails.emplace_back(280, 200, 280, 222);  // vertical, the left one
    arrayOfRails.emplace_back(310, 174, 310,222);  // vertical, the middle (long) one - 1 pixel too short, so it usually is a one-way outwards
    arrayOfRails.emplace_back(340, 200, 340, 222);  // vertical, the right one

}

Map::~Map()
{}

Map *Map::getInstance()
{
    if (!instance) {
        instance = new Map;
    }
    return instance;
}

void Map::deleteInstance()
{
    if (instance) {
        delete instance;
    }
    instance = nullptr;
}

std::vector<Rails> Map::getRails()
{
    return arrayOfRails;
}

void Map::renderMap()
{
    SDL_RenderCopy(Screen::renderer, Map::txMap, nullptr, nullptr);
}