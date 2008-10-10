#ifndef tinycollision_object_manager_h__
#define tinycollision_object_manager_h__
#include "tinycollision_def.h"
#include "tinycollision_object.h"
#include <vector>
namespace TinyCollison{
	class Area{
	private:
		int x;
		int y;
		int x_width;
		int y_width;
	public:
		Area(NumberList & parmas);
	};

	class ObjectManager{
	private:
		Area m_areas[4];
		std::vector<Object *> m_object_list; 
	public:
		
	};
}
#endif // tinycollision_object_manager_h__