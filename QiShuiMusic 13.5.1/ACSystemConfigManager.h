@interface ACSystemConfigManager : NSObject
- (void)_setValue:forKey:;
- (id)init;
- (void)dealloc;
- (long long)countOfAccountsWithAccountTypeIdentifier:;
- (void)_destroySCPreferencesSession;
- (void).cxx_destruct;
- (void)_createSCPreferencesSession;
- (id)_getValueForKey:;
- (void)setCountOfAccounts:withAccountTypeIdentifier:;
- (int)accountsWithAccountTypeIdentifierExist:;
- (void)_handleSCPreferencesSessionNotification:;
- (void)setAccountsWithAccountTypeIdentifier:exist:;
+ (id)sharedInstance;
+ (void)_tearDown;
+ (void)_scheduleSharedInstanceTeardown;
+ (unsigned long long)_timeoutInterval;
+ (id)_livingInstance;
@end
