@interface VNEntityIdentificationModelAlgorithmVIPv3 : VNEntityIdentificationModelAlgorithm
@property (nonatomic) q indexType;
- (void)setIndexType:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)indexType;
- (id)description;
- (BOOL)isEqual:;
- (Class)trainedModelClass;
+ (BOOL)supportsSecureCoding;
@end
