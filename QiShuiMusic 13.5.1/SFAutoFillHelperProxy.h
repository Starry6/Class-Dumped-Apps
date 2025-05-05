@interface SFAutoFillHelperProxy : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)invalidate;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:confirmPasswordRules:overrideApplicationIdentifier:completion:;
- (void)getAutomaticStrongPasswordForAppWithPasswordRules:confirmPasswordRules:completion:;
- (void)getRemoteAutoFillAvailabilityWithCompletionHandler:;
- (void)_getAutomaticStrongPasswordForAppWithPasswordRules:confirmPasswordRules:overrideApplicationIdentifier:completion:;
@end
