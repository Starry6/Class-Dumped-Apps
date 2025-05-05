@interface BWUBProcessorController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) NSInteger progressiveLowLightFusionBatchSize;
- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:;
- (void)cancelProcessing;
- (BOOL)finishProcessingCurrentInputNow;
- (void)input:addFrame:isReferenceFrame:;
- (void)inputReceivedAllFrames:;
- (void)processor:outputReadyWithFrameType:outputPixelBuffer:outputMetadata:error:;
- (id)processorGetInferenceResults:;
- (void)processor:didSelectFusionMode:;
- (void)processor:didEnqueueProcessingForSurfaceID:;
- (void)processor:didCompleteProcessingForSurfaceID:;
- (int)enqueueInputForProcessing:delegate:processErrorRecoveryFrame:processOriginalImage:processToneMapping:processInferenceInputImage:clientBracketSequenceNumber:processSemanticRendering:provideInferenceInputImageForProcessing:inferencesAvailable:;
- (id)adaptiveBracketingParametersForDigitalFlashMode:frameStatistics:stationary:detectedObjects:;
- (id)adaptiveBracketingDigitalFlashTotalIntegrationTimesProviderForPortType:;
- (int)progressiveLowLightFusionBatchSize;
+ (BOOL)lazilyAllocatesDeepFusionOutputBuffers;
@end
