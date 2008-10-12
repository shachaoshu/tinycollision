#ifndef tinycollision_object_view_h__
#define tinycollision_object_view_h__
#include "tinycollision_object.h"
namespace TinyCollison{
	class ObjectView{
	public:
		//接口
		virtual void DrawObj(const Object  *obj) = 0;

		//方法

	};
}
#endif // tinycollision_object_view_h__
