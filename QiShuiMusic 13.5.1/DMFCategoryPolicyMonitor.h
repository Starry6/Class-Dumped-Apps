@interface DMFCategoryPolicyMonitor : NSObject
@property (nonatomic) NSArray policyTypes;
@property (nonatomic) NSUUID identifier;
- (id)policyTypes;
- (void)dealloc;
- (id)identifier;
- (void).cxx_destruct;
- (id)initWithPolicyChangeHandler:;
- (void)requestPoliciesForCategoryIdentifiers:completionHandler:;
@end
