@interface AFPowerContextClient : NSObject
- (id)init;
- (void)_registerForDarwinNotificationIfNeeded;
- (BOOL)_isNotificationTokenRegistered;
- (unsigned long long)currentEncodedPowerPolicyWithError:;
- (id)currentPowerPolicyWithError:;
- (BOOL)updateCurrentPowerPolicy:withError:;
@end
