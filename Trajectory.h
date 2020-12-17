#include "Vector.h"

class Trajectory:
{
	public:
		Trajectory();
		~Trajectory();
		void addPose(Vector a);

	private:
		Vector poseWithTime[];
		int numPoses;
};
