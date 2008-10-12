// test.cpp : 定义控制台应用程序的入口点。
//
#include <Windows.h>
#include "SDL.h"
#include "tinycollision.h"

using namespace TinyCollison;
class Man :public Object{
	void OnCollision( const Object *){
		MessageBox(0,(LPCWSTR)"碰撞了",(LPCWSTR)"碰撞了", MB_OK);
	};
};
void InitDisplay()
{

}
int main(int argc, char * argv[])
{
	SDL_Surface *image;
	SDL_Surface *screen;
	if ( SDL_Init(SDL_INIT_AUDIO|SDL_INIT_VIDEO) < 0 ) 
	{
		fprintf(stderr, "无法初始化SDL: %s\n", SDL_GetError());
		exit(1);
	}


	screen = SDL_SetVideoMode(640, 480, 32, SDL_SWSURFACE);
	if ( screen == NULL ) {
		fprintf(stderr, "无法设置640x480的视频模式：%s\n", SDL_GetError());
		exit(1);
	}
	//    SDL_SetTimer(1000,mycallback);
//	GameMain("b.bmp");





	atexit(SDL_Quit);
	return 0;
	return 0;
}

