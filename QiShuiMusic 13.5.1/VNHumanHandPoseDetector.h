@interface VNHumanHandPoseDetector : VNHumanPoseDetector
- (BOOL)completeInitializationForSession:error:;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:error:;
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:error:;
+ (Class)recognizedPointsObservationClass;
@end
