#include "tinycollision_object.h"
#include <math.h>
bool TinyCollison::Object::CollisionWith( const Object * obj ) const
{
	return (abs( obj->x - x) < obj->x_width + x_width
		&& abs( obj->y - y) < obj->y_width + y_width
		&& abs( obj->z - z) < obj->z_width + z_width ) ;
}

inline void TinyCollison::Object::AddX( int v )
{
	x += v;
}

inline void TinyCollison::Object::AddY( int v )
{
	y += v;
}


inline void TinyCollison::Object::AddZ( int v )
{
	z += v;
}

TinyCollison::Object::Object( int x/*=0*/, int y/*=0*/, int z/*=0 */,int x_width /*=1*/,int y_width /*=1*/,int z_width/*=1*/ )
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->x_width = x_width;
	this->y_width = y_width;
	this->z_width = z_width;
}