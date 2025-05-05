@interface BWInferenceSampleBufferPropagator : NSObject
@property (nonatomic) BOOL allowsAsyncPropagation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)propagateInferenceResultsToInferenceDictionary:usingStorage:inputSampleBuffer:propagationSampleBuffer:;
- (BOOL)allowsAsyncPropagation;
- (id)initWithVideoRequirements:cloneRequirements:metadataRequirements:;
@end
