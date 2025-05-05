@interface AAPreferences : NSObject
+ (long long)customHealthCheckVersion;
+ (BOOL)isCustomHealthCheckIntervalEnabled;
+ (void)setNeverSkipCustodianCheckEnabled:;
+ (void)setExperimentalModeEnabled:;
+ (BOOL)isNeverSkipCustodianCheckEnabled;
+ (BOOL)isRunningInStoreDemoMode;
+ (BOOL)shouldUseUnifiedLoginEndpoint;
+ (BOOL)isHealthCheckTTREnabled;
+ (void)setHealthCheckTTREnabled:;
+ (BOOL)shouldEnableFastSignIn;
+ (void)setCustomHealthFailureReachabilityIntervalMinutes:;
+ (BOOL)isMultipleFullAccountsEnabled;
+ (void)setShouldUseUnifiedLoginEndpoint:;
+ (long long)customHealthCheckIntervalMinutes;
+ (long long)customHealthCheckReachabilityIntervalMinutes;
+ (BOOL)shouldShowAccountContacts;
+ (BOOL)isBackupForDataSeparationEnabled;
+ (void)setCustomHealthCheckIntervalMinutes:;
+ (BOOL)isSimulateUnhealthyCustodianEnabled;
+ (BOOL)isExperimentalModeEnabled;
+ (void)setMultipleFullAccountsEnabled:;
+ (void)setCustomHealthCheckIntervalEnabled:;
+ (BOOL)shouldEnableAccountUserNotifications;
+ (void)setShouldShowAccountContacts:;
+ (void)setSimulateUnhealthyCustodianEnabled:;
+ (void)setCustomHealthCheckVersion:;
@end
