@interface LocalKeychainAnalytics : SFAnalytics
- (id)init;
- (void)reportKeychainUpgradeFrom:to:outcome:error:;
- (void)reportKeychainBackupEnd:error:;
- (void)reportKeychainBackupStartWithType:;
- (void)reportKeychainUpgradeOutcome:attributes:;
- (void).cxx_destruct;
- (BOOL)canPersistMetrics;
- (void)processPendingMessages;
+ (id)databasePath;
@end
