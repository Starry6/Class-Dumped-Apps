@interface ABPKDepthBasedScaleEstimation : NSObject
- (void)resetState;
- (id)init;
- (float)estimateScaleFromDepthData:depthConfidenceData:timestamp:imageResolution:imageIntrinsics:cameraFromBodyPose:liftingResult:;
- (float)estimateScaleFromJasperCloud:cameraFromBodyPose:liftingResult:;
@end
