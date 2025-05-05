@interface ARPlaneWorld : NSObject
- (id)init;
- (BOOL)isBusy;
- (void).cxx_destruct;
- (id)_fullDescription;
- (id).cxx_construct;
- (id)initWithTextureSize:;
- (id)updatePlanes:withCurrentDetections:synchronous:;
- (void)updatePlanes:withCameraImage:exposureOffset:transform:intrinsics:synchronous:;
- (id)planes;
+ (id)findMergedPlanes::;
@end
