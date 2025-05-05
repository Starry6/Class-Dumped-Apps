@interface NEAppSidecarPolicySession : NSObject
- (id)init;
- (void).cxx_destruct;
- (BOOL)installPolicies;
- (BOOL)uninstallPolicies;
+ (id)connectionIdentifier;
@end
