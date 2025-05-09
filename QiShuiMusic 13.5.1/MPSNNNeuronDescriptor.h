@interface MPSNNNeuronDescriptor : NSObject
@property (nonatomic) NSInteger neuronType;
@property (nonatomic) float a;
@property (nonatomic) float b;
@property (nonatomic) float c;
@property (nonatomic) NSData data;
- (float)b;
- (int)neuronType;
- (id)neuronInfo;
- (void)setB:;
- (void)dealloc;
- (float)a;
- (void)setC:;
- (void)initializeWithType:a:b:c:;
- (id)data;
- (id)initWithType:a:b:c:;
- (void)initializeWithPReLUWithData:noCopy:;
- (id)initWithCoder:;
- (id)initWithPReLUWithData:noCopy:;
- (id)debugDescription;
- (void)setNeuronType:;
- (void)encodeWithCoder:;
- (float)c;
- (void)setData:;
- (void)setA:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)cnnNeuronDescriptorWithType:a:b:;
+ (id)cnnNeuronDescriptorWithType:;
+ (id)cnnNeuronDescriptorWithType:a:b:c:;
+ (id)cnnNeuronPReLUDescriptorWithData:noCopy:;
+ (id)cnnNeuronDescriptorWithType:a:;
@end
