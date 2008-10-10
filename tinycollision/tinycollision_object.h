#ifndef tinycollision_object_h__
#define tinycollision_object_h__
namespace TinyCollison{
	class Object{
	private:
		int x;
		int y;	//中心坐标
		int z;
		int x_width;
		int y_width;	//中心坐标到 边界的距离
		int z_width;
	public:
		virtual void OnCollision( const Object &);
	};
}

#endif // tinycollision_object_h__
