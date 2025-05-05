@interface VNNOPRequest : VNImageBasedRequest
@property (nonatomic) VNSupportedImageSize detectorPreferredImageSize;
@property (nonatomic) BOOL detectorWantsAnisotropicScaling;
@property (nonatomic) double detectorExecutionTimeInterval;
- (BOOL)internalPerformRevision:inContext:error:;
- (BOOL)willAcceptCachedResultsFromRequestWithConfiguration:;
- (BOOL)hasCancellationHook;
- (id)detectorPreferredImageSize;
- (void)setDetectorPreferredImageSize:;
- (BOOL)detectorWantsAnisotropicScaling;
- (void)setDetectorWantsAnisotropicScaling:;
- (double)detectorExecutionTimeInterval;
- (void)setDetectorExecutionTimeInterval:;
- (id)_actualSizeForDesiredSize:ofSourceImageWidth:height:;
- (id)_createScaledImagePixelBufferFromCropRect:ofImageBuffer:inPixelFormat:forDetectorInputImageSize:usingAnisotropicScaling:error:;
- (id)_createScaledImagePixelBufferFromImageBuffer:inPixelFormat:forDetectorInputImageSize:usingAnisotropicScaling:error:;
- (BOOL)_performNOPForRevision:inContext:detectorCompletionSemaphore:error:;
- (id)supportedImageSizeSet;
+ (Class)configurationClass;
@end
