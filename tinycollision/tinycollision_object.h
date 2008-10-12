#ifndef tinycollision_object_h__
#define tinycollision_object_h__
#include "tinycollision_object_view.h"
namespace TinyCollison{
	class Object{
		friend  ObjectView;
	private:
		int x;
		int y;	//��������
		int z;
		int x_width;
		int y_width;	//���ĵ� �߽�ľ���
		int z_width;
	public:
		//�ӿ�
		virtual void OnCollision( const Object *) =0 ;
		virtual bool CollisionWith(const Object * obj) const;

		//����
		Object(int x=0, int y=0, int z=0 ,int x_width =1,int y_width =1,int z_width=1);
		inline void AddX(int v);
		inline void AddY(int v);
		inline void AddZ(int v);

		
	};
}

#endif // tinycollision_object_h__
