@interface DMFiCloudPolicyMonitor : NSObject
@property (nonatomic) NSArray policyTypes;
@property (nonatomic) NSUUID identifier;
@property (nonatomic) q iCloudLogoutPolicy;
- (id)init;
- (id)policyTypes;
- (void)setICloudLogoutPolicy:;
- (void)dealloc;
- (id)identifier;
- (id)requestiCloudLogoutPolicyWithError:;
- (void)requestiCloudLogoutPolicyWithCompletionHandler:;
- (void).cxx_destruct;
- (long long)iCloudLogoutPolicy;
- (id)initWithPolicyChangeHandler:;
+ (id)new;
+ (id)iCloudLogoutPolicyForPoliciesByType:;
@end
