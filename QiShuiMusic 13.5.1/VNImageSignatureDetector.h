@interface VNImageSignatureDetector : VNDetector
@property (nonatomic) Q imageSignatureprintType;
@property (nonatomic) Q imageSignatureHashType;
- (id)internalProcessUsingQualityOfServiceClass:options:regionOfInterest:warningRecorder:error:progressHandler:;
- (void).cxx_destruct;
- (BOOL)completeInitializationForSession:error:;
- (id).cxx_construct;
- (unsigned long long)imageSignatureprintType;
- (unsigned long long)imageSignatureHashType;
- (BOOL)supportsProcessingDevice:;
- (BOOL)needsMetalContext;
- (id)_calculateImageSignatureprintDescriptorFromOptions:error:;
- (id)_calculateImageSignatureHashDescriptorFrom:options:error:;
+ (id)configurationOptionKeysForDetectorKey;
@end
