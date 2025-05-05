@interface DMFPrioritizedPolicy : NSObject
@property (nonatomic) q priority;
@property (nonatomic) q policy;
- (void)setPolicy:;
- (void)setPriority:;
- (long long)policy;
- (unsigned long long)hash;
- (long long)compare:;
- (BOOL)isEqual:;
- (long long)priority;
- (id)initWithEffectivePolicy:identifier:excludableIdentifiers:;
- (BOOL)isEqualToPrioritizedPolicy:;
+ (long long)arbitratePolicyForPrioritizedPolicies:;
+ (id)prioritizedPoliciesForAppPolicy:appCategoryPolicy:bundleIdentifiers:categoryPolicy:categoryIdentifiers:webPolicy:webCategoryPolicy:webDomains:;
@end
