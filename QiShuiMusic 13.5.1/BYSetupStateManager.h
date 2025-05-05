@interface BYSetupStateManager : NSObject
- (id)buddyPrefsValueForKey:;
- (long long)restoreType;
- (void)clearRestoreType;
- (BOOL)didRestoreFromBackup;
- (BOOL)didSetupUsingiTunes;
- (void)recordSetupUsingBuddy;
+ (id)sharedManager;
@end
