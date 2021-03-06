#ifndef _inc_game_
#define _inc_game_

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "SDL/SDL.h"
#include "SDL/SDL_ttf.h"
#include "aux.hh"

class Game{
private:
  bool update;
  SDL_Surface* surf;
  SDL_Surface* thumbnail;
  int nx;
  int ny;
  char* plan;
  void createThumbnail();
  SDL_Rect parentBounds;
  bool highlighted;
  string title;
  TTF_Font* font;
public:
  Game(string path);
  SDL_Surface* getSurface();
  bool needUpdate();
  void updateSurface();
  SDL_Surface* getThumbnail();
  void setParentBounds(int x, int y, int w, int h);
  SDL_Rect getParentBounds();
  void setHighlighted(bool b);
  bool getHighlighted();
  bool initGame();
};

#endif
