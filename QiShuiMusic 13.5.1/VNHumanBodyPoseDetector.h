@interface VNHumanBodyPoseDetector : VNHumanPoseDetector
- (BOOL)completeInitializationForSession:error:;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:error:;
+ (Class)recognizedPointsObservationClass;
@end
