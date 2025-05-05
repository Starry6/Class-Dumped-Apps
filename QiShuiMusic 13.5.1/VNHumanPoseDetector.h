@interface VNHumanPoseDetector : VNDetector
- (id)processRegionOfInterest:croppedPixelBuffer:options:qosClass:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)createRegionOfInterestCrop:options:warningRecorder:pixelBuffer:error:progressHandler:;
- (id)vcpPoseRequestSetupOptionsForDetectorOptions:error:;
- (id)vcpPoseRequestRuntimeOptionsForDetectorOptions:error:;
+ (id)configurationOptionKeysForDetectorKey;
+ (Class)recognizedPointsObservationClass;
@end
