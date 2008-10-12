// test.cpp : 定义控制台应用程序的入口点。
//
#include <Windows.h>
#include <iostream>
#include "SDL.h"
#include "tinycollision.h"

using namespace TinyCollison;
class Man :public Object{
public:
	Man(int x=0, int y=0, int z=0 ,int x_width =1,int y_width =1,int z_width=1)
	{
		this->x = x;
		this->y = y;
		this->z = z;
		this->x_width = x_width;
		this->y_width = y_width;
		this->z_width = z_width;
	}
	void OnCollision( const Object * other_obj){
		MessageBoxA(0,"碰撞了","碰撞了", MB_OK);
	};
};

class MyView :public ObjectView{
public:
	SDL_Surface *image;
	SDL_Surface *screen;
	void InitDisplay()
	{

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
		image = SDL_LoadBMP("obj.bmp");
		if(!image)
			fprintf(stderr, "无法加载obj图片：%s\n", SDL_GetError());
	}
	void DrawObj(const Object *obj)
	{
		SDL_Rect pos;
		pos.x = obj->x - obj->x_width;
		pos.y = obj->y - obj->y_width;
		pos.h = obj->y_width *2;
		pos.w = obj->x_width *2;

		SDL_BlitSurface(image ,NULL,screen ,&pos);
	}
};

int main(int argc, char * argv[])
{
	MyView Screen;
	CollisionManager Collistion;
	
	Screen.InitDisplay();
	Man man1(100 ,100 ,0 , 10,10 ,10);
	Man man2(500, 100 ,0 , 10,10 ,10);

	Collistion.AddObject(&man1);
	Collistion.AddObject(&man2);

	//下面演示一下碰撞

	Uint32 time_start = SDL_GetTicks();
	Uint32 time_now;
	SDL_Rect fullscreen;
	fullscreen.x = 0;
	fullscreen.y = 0;
	fullscreen.w = 640;
	fullscreen.h = 480;

	for(;;)
	{  
		time_now = SDL_GetTicks();
		//
		if(time_now -time_start >50)
		{//50毫秒一个计算周期
			man1.AddX(10);
			Collistion.CheckCollision();
			Screen.DrawObj(&man1);
			Screen.DrawObj(&man2);
		}
		else
		{
			SDL_Delay(1);
			continue;
		}
		SDL_UpdateRects(Screen.screen, 1, &fullscreen);
		time_start = time_now;
	}
	atexit(SDL_Quit);
	return 0;
}

