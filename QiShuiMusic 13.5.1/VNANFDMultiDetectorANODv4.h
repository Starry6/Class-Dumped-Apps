@interface VNANFDMultiDetectorANODv4 : VNANFDMultiDetectorANODv3
- (id)splitDetectedClassResultsIntoSubclasses:;
- (BOOL)updateRuntimeParametersFromOptions:error:;
- (BOOL)processDetectedObject:originatingRequestSpecifier:objectBoundingBox:imageBuffer:qosClass:warningRecorder:detectedObjectResults:error:;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:;
+ (Class)detectorClass;
+ (id)recognizedAnimalHeadObjectClassToAnimalHeadCategoryName;
+ (id)detectedObjectClassToRequestKey;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (id)recognizedSportBallObjectClassToSportBallCategoryName;
+ (id)knownAnimalHeadIdentifiers;
+ (id)knownSportBallIdentifiers;
@end
