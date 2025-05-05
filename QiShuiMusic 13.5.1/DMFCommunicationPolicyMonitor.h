@interface DMFCommunicationPolicyMonitor : NSObject
@property (nonatomic) NSDictionary policiesByBundleIdentifier;
@property (nonatomic) DMFApplicationPolicyMonitor applicationPolicyMonitor;
@property (nonatomic) BOOL didFetchInitialPolicies;
@property (nonatomic) NSArray policyTypes;
@property (nonatomic) NSUUID identifier;
- (id)init;
- (id)policyTypes;
- (void)dealloc;
- (id)policiesByBundleIdentifier;
- (id)identifier;
- (void)requestPoliciesByBundleIdentifierWithCompletionHandler:;
- (void)_updatePoliciesByBundleIdentifier;
- (BOOL)didFetchInitialPolicies;
- (void).cxx_destruct;
- (void)setDidFetchInitialPolicies:;
- (void)_updateWithPoliciesByBundleIdentifier:categoryEffectivePolicy:;
- (id)requestPoliciesByBundleIdentifierWithError:;
- (void)setPoliciesByBundleIdentifier:;
- (id)applicationPolicyMonitor;
- (id)initWithPolicyChangeHandler:;
+ (id)new;
+ (id)_transformEffectivePoliciesIntoCommunicationPolicies:;
+ (id)communicationBundleIdentifiers;
+ (id)_equivalentCommunicationBundleIdentifiersForCommunicationBundleIdentifier:;
+ (unsigned long long)communicationPolicyForApplicationPolicy:downtimeEnforced:;
+ (id)_calculateCommunicationPoliciesWithApplicationPoliciesByBundleIdentifier:categoryEffectivePolicy:;
+ (id)_categoryForCommunicationBundleIdentifier:;
@end
