@interface ARGPUWarper : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)warpCameraImage:withExposureOffset:withCameraIntrinsics:withCameraTransform:toPlane:withLoadAction:synchronous:;
- (void)warpPlane:toPlane:withLoadAction:synchronous:;
@end
