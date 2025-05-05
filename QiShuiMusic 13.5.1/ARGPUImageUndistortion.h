@interface ARGPUImageUndistortion : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)undistortFisheyeImage:withFisheyeIntrinsics:withFisheyeRadialCoefficients:toRectilinearImage:withRectilinearIntrinsics:;
- (BOOL)undistortFisheyeTexture:withFisheyeIntrinsics:withFisheyeRadialCoefficients:toRectilinearImage:withRectilinearIntrinsics:;
@end
