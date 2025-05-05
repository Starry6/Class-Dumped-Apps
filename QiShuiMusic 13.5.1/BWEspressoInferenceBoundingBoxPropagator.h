@interface BWEspressoInferenceBoundingBoxPropagator : NSObject
@property (nonatomic) BOOL allowsAsyncPropagation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)propagateInferenceResultsToInferenceDictionary:usingStorage:inputSampleBuffer:propagationSampleBuffer:;
- (BOOL)allowsAsyncPropagation;
- (id)initWithBoxRequirement:scoreRequirement:angularOffsetRequirement:fontSizeRequirement:configuration:toInferenceResultKey:;
@end
