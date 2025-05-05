@interface DMFApplicationPolicyMonitor : NSObject
@property (nonatomic) NSArray policyTypes;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) DMFPolicyRegistration registration;
- (void)requestPoliciesForBundleIdentifiers:completionHandler:;
- (id)policyTypes;
- (void)dealloc;
- (id)registration;
- (id)_initWithPolicyChangeHandler:addingRegistration:;
- (id)identifier;
- (void).cxx_destruct;
- (id)requestPoliciesForBundleIdentifiers:withError:;
- (id)initWithPolicyChangeHandler:;
+ (void)createPolicyMonitorWithPolicyChangeHandler:completionHandler:;
+ (id)fetchParentBundleIdentifiersForBundleIdentifiers:;
+ (id)_fetchCategoriesForBundleIdentifiers:withError:;
+ (void)_fetchCategoriesForBundleIdentifiers:completionHandler:;
@end
