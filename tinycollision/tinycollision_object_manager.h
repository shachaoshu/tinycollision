#ifndef tinycollision_object_manager_h__
#define tinycollision_object_manager_h__
#include "tinycollision_def.h"
#include "tinycollision_object.h"
#include "tinycollision_object_view.h"
#include <vector>
namespace TinyCollison{
	class Area{
	private:
		int x;
		int y;
		int x_width;
		int y_width;
	public:
		Area(NumberList & params);
		Area();
	};

	class CollisionManager{
		typedef std::vector< Object*> ObjectList;

	private:
		Area m_areas[4];
		ObjectList m_object_list; 
	public:
		void CheckCollision();
		void AddObject(Object * obj);
		void DelObject(Object * obj);

		CollisionManager()
		{

		}
	};
}
#endif // tinycollision_object_manager_h__