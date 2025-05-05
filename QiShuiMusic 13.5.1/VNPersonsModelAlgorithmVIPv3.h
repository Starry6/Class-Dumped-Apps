@interface VNPersonsModelAlgorithmVIPv3 : VNPersonsModelAlgorithm
@property (nonatomic) q indexType;
- (void)setIndexType:;
- (Class)faceModelClass;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (long long)indexType;
- (id)description;
- (BOOL)isEqual:;
+ (BOOL)supportsSecureCoding;
@end
