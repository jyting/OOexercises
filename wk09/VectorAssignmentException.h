#ifndef VECTORASSIGNMENTEXCEPTION_H
#define VECTORASSIGNMENTEXCEPTION_H
#include "VectorRuntimeException.h"
namespace Week9
{
	class VectorAssignmentException : public VectorRuntimeException
	{
		public:
			VectorAssignmentException(const char *message)
				: VectorRuntimeException(message)
			{

			}

			virtual ~VectorAssignmentException()
			{

			}
	};
}
#endif // VECTORASSIGNMENTEXCEPTION_H
