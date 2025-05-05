@interface MIOFeatureDescription : NSObject
@property (nonatomic) NSString name;
@property (nonatomic) NSString shortDescription;
@property (nonatomic) q type;
@property (nonatomic) BOOL optional;
@property (nonatomic) <MIOFeatureValueConstraint> constraint;
- (id)shortDescription;
- (id)constraint;
- (unsigned long long)hash;
- (long long)type;
- (void).cxx_destruct;
- (id)description;
- (id)name;
- (id)initWithSpecification:;
- (id)mutableCopyWithZone:;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (BOOL)optional;
- (void)setShortDescription:;
- (id)featureDescriptionSpecification;
@end
