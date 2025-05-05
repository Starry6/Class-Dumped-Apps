@interface BWDeepFusionProcessorController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (unsigned long long)type;
- (id)initWithConfiguration:;
- (int)enqueueInputForProcessing:delegate:;
- (void)cancelProcessing;
- (id)externalMemoryDescriptor;
- (id)metalImageBufferProcessor;
- (id)processorGetInferenceResults:;
- (void)input:addInputBuffer:;
- (void)addInferencesForInput:;
- (void)beginProcessingCachedBuffersForInput:;
- (void)processor:outputReadyWithBufferType:outputPixelBuffer:outputMetadata:error:;
@end
