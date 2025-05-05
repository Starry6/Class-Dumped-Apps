@interface MontrealNNModelTensor : MontrealNNDescription
@property (nonatomic) NSString name;
@property (nonatomic) NSArray dimension;
@property (nonatomic) NSHashTable asInput;
@property (nonatomic) NSHashTable asOutput;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)dimension;
- (id)initWithDictionary:;
- (unsigned long long)hash;
- (id)jsonDescription;
- (void).cxx_destruct;
- (id)name;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (void)description:indent:;
- (id)checkForValidity;
- (id)initWithName:dimension:;
- (unsigned long long)tensorSize;
- (id)asInput;
- (id)asOutput;
+ (id)createInputs:inputChunks:nodeName:;
+ (id)createOutputs:outputChunks:nodeName:;
@end
