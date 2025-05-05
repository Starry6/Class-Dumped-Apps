@interface VNTrajectoryProcessor : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithFrameAnalysisSpacing:trajectoryLength:;
- (id)_createCroppedAndScaledBufferFromVNImageBuffer:regionOfInterest:withOptions:error:;
- (id)_VNPointsFromCGPoints:;
- (id)processVNImageBuffer:regionOfInterest:withOptions:warningRecorder:requestUUID:error:;
@end
