@interface GPUImageUndistortion : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)undistortFisheyeImage:withFisheyeIntrinsics:withFisheyeRadialCoefficients:toRectilinearImage:withRectilinearIntrinsics:;
@end
