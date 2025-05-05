@interface VNTensorDescriptor : VNProcessingDescriptor
@property (nonatomic) NSString name;
@property (nonatomic) Q dataType;
@property (nonatomic) VNTensorShape shape;
@property (nonatomic) Q storageByteCount;
- (id)shape;
- (id)initWithCoder:;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (BOOL)isEqual:;
- (id)initWithName:dataType:shape:;
- (unsigned long long)storageByteCount;
+ (BOOL)supportsSecureCoding;
+ (id)descriptorForEspressoBlobDimensions:dataType:;
@end
