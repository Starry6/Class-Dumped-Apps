@interface DMFWebsitePolicyMonitor : NSObject
@property (nonatomic) NSArray policyTypes;
@property (nonatomic) NSUUID identifier;
- (id)policyTypes;
- (void)dealloc;
- (id)identifier;
- (void)requestPoliciesForWebsites:completionHandler:;
- (void).cxx_destruct;
- (void)_fetchCategoriesIfNeededForWebsiteURLs:response:;
- (id)initWithPolicyChangeHandler:;
@end
