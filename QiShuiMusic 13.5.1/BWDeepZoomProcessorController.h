@interface BWDeepZoomProcessorController : BWStillImageProcessorController
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)outputFormatForAttachedMediaKey:;
- (BOOL)intermediateResourceTrackingAllowedForAttachedMediaKey:;
- (void)dealloc;
- (id)inputInferenceVideoFormatForAttachedMediaKey:;
- (unsigned long long)type;
- (id)inputVideoFormatForAttachedMediaKey:;
- (id)outputVideoFormatForAttachedMediaKey:;
- (id)initWithConfiguration:;
- (id)inputFormatForAttachedMediaKey:;
- (int)enqueueInputForProcessing:delegate:;
- (void)cancelProcessing;
- (int)prepareWithPixelBufferPoolProvider:;
- (void)inputSampleBufferReceived:;
@end
