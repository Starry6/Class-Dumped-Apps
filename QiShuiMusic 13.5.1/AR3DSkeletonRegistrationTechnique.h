@interface AR3DSkeletonRegistrationTechnique : ARTechnique
@property (nonatomic) BOOL automaticSkeletonScaleEstimationEnabled;
- (void)resetState;
- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (void)prepare:;
- (void)requestResultDataAtTimestamp:context:;
- (BOOL)reconfigurableFrom:;
- (id)processResultData:timestamp:context:;
- (BOOL)automaticSkeletonScaleEstimationEnabled;
- (void)setAutomaticSkeletonScaleEstimationEnabled:;
- (BOOL)_estimateCameraPoseFromMatchingImageData:to3DData:worldTrackingPose:pCameraFromBody:depthData:pScaleOut:;
- (float)_estimateScaleFromDepthData:imageData:cameraPoseFromBody:skeleton:;
- (float)_estimateScaleFromJasperCloud:cameraPoseFromBody:skeleton:;
@end
