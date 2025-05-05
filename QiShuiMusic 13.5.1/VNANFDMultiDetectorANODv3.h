@interface VNANFDMultiDetectorANODv3 : VNANFDMultiDetector
- (id)splitDetectedClassResultsIntoSubclasses:;
- (BOOL)updateRuntimeParametersFromOptions:error:;
- (BOOL)processDetectedObject:originatingRequestSpecifier:objectBoundingBox:imageBuffer:qosClass:warningRecorder:detectedObjectResults:error:;
+ (BOOL)shouldAlignFacesForRequestWithSpecifier:;
+ (Class)detectorClass;
+ (id)knownFoodAndDrinkIdentifiers;
+ (id)detectedObjectClassToRequestKey;
+ (id)detectedObjectRequestKeyToRequestInfo;
+ (id)recognizedFoodAndDrinkObjectClassToFoodAndDrinkCategoryName;
@end
