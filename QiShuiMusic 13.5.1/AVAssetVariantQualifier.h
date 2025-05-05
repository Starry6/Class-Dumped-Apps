@interface AVAssetVariantQualifier : NSObject
@property (nonatomic) q environmentalConditions;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)copyWithZone:;
- (id)_variant;
- (id)_predicate;
- (BOOL)_validatePredicate:error:;
- (id)initWithVariant:predicate:;
- (long long)environmentalConditions;
- (void)setEnvironmentalConditions:;
+ (BOOL)supportsSecureCoding;
+ (id)assetVariantQualifierWithPredicate:;
+ (id)assetVariantQualifierWithVariant:;
+ (id)predicateForChannelCount:mediaSelectionOption:operatorType:;
+ (id)predicateForPresentationWidth:operatorType:;
+ (id)predicateForPresentationHeight:operatorType:;
@end
