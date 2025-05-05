@interface ARCubemapGenerator : NSObject
- (id)init;
- (void).cxx_destruct;
- (void)cubemapWithTransform:extent:lastHistogram:fromMeshes:cameraImage:cameraTransform:cameraIntrinsics:cameraExposure:cameraExposureOffset:completionHandler:;
@end
