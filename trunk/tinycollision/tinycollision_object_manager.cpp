#include "tinycollision_object_manager.h"

TinyCollison::Area::Area(NumberList &params )
{
	x = params[0];
	y = params[1];
	x_width = params[2];
	y_width = params[3];
}