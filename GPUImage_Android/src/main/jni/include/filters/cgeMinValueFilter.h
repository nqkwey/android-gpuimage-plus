/*
* cgeMinValueFilter.h
*
*  Created on: 2015-3-20
*      Author: Wang Yang
* Description: ��Сֵ�˲�
*/

#ifndef _CGE_MINVALUE_FILTER_H_
#define _CGE_MINVALUE_FILTER_H_

#include "cgeGLFunctions.h"

namespace CGE
{
	class CGEMinValueFilter3x3: public CGEImageFilterInterface
	{
	public:

		bool init();

	protected:

		static CGEConstString paramSamplerStepsName;
		
		virtual const char* getShaderCompFunc();
	};

	class CGEMinValueFilter3x3Plus: public CGEMinValueFilter3x3
	{
	public:

		bool init();
	};

}

#endif