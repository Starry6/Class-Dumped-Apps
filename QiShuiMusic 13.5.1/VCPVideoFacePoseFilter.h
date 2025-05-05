@interface VCPVideoFacePoseFilter : NSObject
- (void)reset;
- (id).cxx_construct;
- (int)rotationToEulerAngles:angles:;
- (int)eulerAnglesToRotation:R:;
- (int)kalmanFiltering:T:;
- (int)filteringPose:;
@end
