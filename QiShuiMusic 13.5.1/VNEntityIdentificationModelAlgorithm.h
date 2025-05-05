@interface VNEntityIdentificationModelAlgorithm : NSObject
@property (nonatomic) # trainedModelClass;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (Class)trainedModelClass;
+ (BOOL)supportsSecureCoding;
@end
