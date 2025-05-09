@interface MPSConvolutionDataSourceWrapper : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)neuronInfo;
- (void)purge;
- (BOOL)load;
- (BOOL)respondsToSelector:;
- (id)descriptor;
- (void)initialize;
- (void)dealloc;
- (id)initWithDataSource:;
- (id)rangesForUInt8Kernel;
- (unsigned int)dataType;
- (id)label;
- (id)debugDescription;
- (id)weights;
- (id)biasTerms;
- (id)copyWithZone:;
- (id)lookupTableForUInt8Kernel;
- (unsigned int)weightsQuantizationType;
- (id)updateWithCommandBuffer:gradientState:sourceState:;
- (BOOL)updateWithGradientState:sourceState:;
- (BOOL)appendBatchNorm:;
- (BOOL)appendNeuron:;
- (BOOL)appendNeuronDescriptor:;
- (BOOL)hasBatchNorm;
+ (id)wrapperForDataSource:;
@end
