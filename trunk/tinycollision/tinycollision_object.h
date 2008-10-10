#ifndef tinycollision_object_h__
#define tinycollision_object_h__
namespace TinyCollison{
	class Object{
	private:
		int x;
		int y;	//��������
		int z;
		int x_width;
		int y_width;	//�������굽 �߽�ľ���
		int z_width;
	public:
		virtual void OnCollision( const Object &);
	};
}

#endif // tinycollision_object_h__
