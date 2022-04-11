
#include"circle.h"

	//ÉèÖÃ°ë¾¶£»
	void Circle::setR(int r)
	{
		m_R = r;
	}
	//»ñÈ¡°ë¾¶£»
	int  Circle::getR()
	{
		return m_R;
	}
	//ÉèÖÃÔ²ÐÄ£»
	void  Circle::setCenter(Point center)
	{
		m_Center = center;
	}
	//»ñÈ¡Ô²ÐÄ£»
	Point   Circle::getCenter()
	{
		return m_Center;
	}
