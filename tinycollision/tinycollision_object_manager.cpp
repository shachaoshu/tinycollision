#include "tinycollision_object_manager.h"

TinyCollison::Area::Area(NumberList &params )
{
	x = params[0];
	y = params[1];
	x_width = params[2];
	y_width = params[3];
}

void TinyCollison::CollisionManager::CheckCollision()
{
	if(m_object_list.empty())
		return ;
	ObjectList::iterator itr;
	ObjectList::iterator itr1;
	for( itr = m_object_list.begin() ; itr < m_object_list.end() ;itr ++)
	{
		for(itr1 = itr + 1 ; itr1 <= m_object_list.end() ; itr1 ++)
		{
			if((*itr)->CollisionWith(*itr1))
			{
				(*itr)->OnCollision(*itr1);
				(*itr1)->OnCollision(*itr);
			}
		}
	}
}

void TinyCollison::CollisionManager::AddObject( Object * obj )
{
	m_object_list.push_back(obj);
}

void TinyCollison::CollisionManager::DelObject( Object * obj )
{

}
