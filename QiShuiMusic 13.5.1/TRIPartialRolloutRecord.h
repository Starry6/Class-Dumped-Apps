@interface TRIPartialRolloutRecord : NSObject
@property (nonatomic) TRIRolloutDeployment deployment;
@property (nonatomic) NSString<TRIRampId> rampId;
@property (nonatomic) NSString<TRIFactorPackSetId> activeFactorPackSetId;
@property (nonatomic) NSNumber activeTargetingRuleIndex;
@property (nonatomic) NSString<TRIFactorPackSetId> targetedFactorPackSetId;
@property (nonatomic) NSNumber targetedTargetingRuleIndex;
@property (nonatomic) q status;
@property (nonatomic) NSArray namespaces;
@property (nonatomic) BOOL isShadow;
- (id)deployment;
- (id)copyWithReplacementRampId:;
- (id)rampId;
- (id)copyWithReplacementNamespaces:;
- (id)activeFactorPackSetId;
- (BOOL)isShadow;
- (id)copyWithReplacementStatus:;
- (id)copyWithReplacementActiveFactorPackSetId:;
- (id)namespaces;
- (id)init;
- (id)targetedTargetingRuleIndex;
- (id)copyWithReplacementActiveTargetingRuleIndex:;
- (id)copyWithReplacementIsShadow:;
- (id)copyWithReplacementDeployment:;
- (id)targetedFactorPackSetId;
- (id)copyWithReplacementTargetedTargetingRuleIndex:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)initWithDeployment:rampId:activeFactorPackSetId:activeTargetingRuleIndex:targetedFactorPackSetId:targetedTargetingRuleIndex:status:namespaces:isShadow:;
- (void)encodeWithCoder:;
- (id)activeTargetingRuleIndex;
- (BOOL)isEqualToRecord:;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithReplacementTargetedFactorPackSetId:;
- (long long)status;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)recordWithDeployment:rampId:activeFactorPackSetId:activeTargetingRuleIndex:targetedFactorPackSetId:targetedTargetingRuleIndex:status:namespaces:isShadow:;
+ (id)partialRecordWithFullRecord:;
@end
