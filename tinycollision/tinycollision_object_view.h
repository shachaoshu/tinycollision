#ifndef tinycollision_object_view_h__
#define tinycollision_object_view_h__
#include "tinycollision_object.h"
namespace TinyCollison{
	class ObjectView{
	public:
		//�ӿ�
		virtual void DrawObj(const Object  *obj) = 0;

		//����

	};
}
#endif // tinycollision_object_view_h__
