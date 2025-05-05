@interface GEOAPUploadPolicies : NSObject
- (id)init;
- (id)uploadPolicyForUploadPolicyType:;
- (void)_updatePolicyConfigForUploadPolicyConfigType:configKey:;
- (void).cxx_destruct;
- (double)ttlForUploadPolicyType:;
+ (id)sharedPolicies;
@end
