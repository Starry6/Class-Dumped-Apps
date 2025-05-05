@interface SGLabeledObject : SGObject
@property (nonatomic) NSString label;
@property (nonatomic) SGExtractionInfo extractionInfo;
@property (nonatomic) Q extractionType;
- (id)initWithCoder:;
- (id)label;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)extractionInfo;
- (unsigned long long)extractionType;
- (id)initWithLabel:extractionInfo:recordId:;
- (id)initWithLabel:extractionType:recordId:origin:;
- (BOOL)isEqualToLabeledObject:;
+ (BOOL)supportsSecureCoding;
@end
