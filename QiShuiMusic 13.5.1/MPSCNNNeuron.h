@interface MPSCNNNeuron : MPSCNNKernel
@property (nonatomic) NSInteger neuronType;
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
@property (nonatomic) NSData data;
- (float)b;
- (int)neuronType;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (float)a;
- (id)data;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (float)c;
- (id)initWithDevice:;
- (id)initWithDevice:neuronDescriptor:;
- (id)privateInitWithDevice:a:b:c:type:;
- (id)privateInitWithDevice:a:count:type:;
- (void)initializeWithNeuronType:neuronParameterA:neuronParameterB:neuronParameterC:;
- (void)initializeWithNeuronType:neuronParameterA:count:;
+ (id)libraryInfo:;
@end
