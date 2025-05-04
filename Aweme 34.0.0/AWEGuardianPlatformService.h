@interface AWEGuardianPlatformService : NSObject
@property (nonatomic) BOOL isChildBindingGuardianPassword;
- (void)updateChildTimeLockStatus:childUserID:secChildUserID:completion:;
- (void)updateChildTeenModeEnabled:childUserID:secChildUserID:completion:;
- (void)getDynamicPassword:secUserID:completion:;
- (BOOL)isChildBindingGuardianPassword;
- (void)childBindGuardianPassword:objectID:completion:;
- (void)setIsChildBindingGuardianPassword:;
@end
