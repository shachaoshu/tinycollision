#ifndef tinycollision_def_h__
#define tinycollision_def_h__
#include <assert.h>
namespace TinyCollison{
	class NumberList{

		int size;
	public:
		virtual int & operator[](const int &i)  ;
	};

	template<int listsize>
	class IntList :public NumberList{
	public:
		int list[listsize];
		IntList(const int *from)
		{
			size = listsize;
			int i;
			for(i = 0; i<listsize ;i ++)
				list[i] = from[i];
		}
		int & operator[](const int &i)
		{
			assert(i>=0 && i<listsize);
			return list[i];
		}
	};
}
#endif // tinycollision_def_h__