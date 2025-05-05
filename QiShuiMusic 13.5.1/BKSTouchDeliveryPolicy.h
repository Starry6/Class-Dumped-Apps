@interface BKSTouchDeliveryPolicy : NSObject
@property (nonatomic) NSObject<OS_xpc_object> assertionEndpoint;
- (id)policyExcludingPolicy:;
- (id)policyIncludingPolicy:;
- (id)policyByMappingContainedPoliciesWithBlock:;
- (id)policyExcludingPolicyIdenticalTo:;
- (void)setAssertionEndpoint:;
- (id)initWithCoder:;
- (unsigned long long)hash;
- (id)reducePolicyToObjectWithBlock:;
- (void)encodeWithCoder:;
- (id)matchSharingTouchesPolicy:orCancelTouchesPolicy:orCombinedPolicy:;
- (id)assertionEndpoint;
- (id)description;
- (void)appendDescriptionToFormatter:;
- (BOOL)isEqual:;
+ (id)allocWithZone:;
+ (BOOL)supportsSecureCoding;
+ (id)policyByCombiningPolicies:;
+ (id)policyCancelingTouchesDeliveredToContextId:withInitialTouchTimestamp:;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:withHostContextId:;
@end
