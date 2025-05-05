@interface VNFaceDetectorPrivateRevisionLegacyFaceCore : VNFaceDetector
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
+ (id)_convertVNOptionsToFaceCoreSetupOptions:;
+ (id)_convertVNOptionsToFaceCoreOptions:optionsMap:;
+ (id)_convertVNOptionsToFaceCoreExtractOptions:;
+ (id)supportedImageSizeSetForOptions:error:;
+ (id)_convertVNOptionsToFaceCoreDetectOptions:;
@end
