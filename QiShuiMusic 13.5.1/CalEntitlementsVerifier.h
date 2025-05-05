@interface CalEntitlementsVerifier : NSObject
+ (BOOL)currentProcessHasContactsUIEntitlement;
+ (BOOL)currentProcessIsPreferences;
+ (BOOL)currentProcessHasWatchOSMutableDatabaseEntitlement;
+ (BOOL)currentProcessIsAutomator;
+ (id)currentProcessGetStringEntitlement:;
+ (BOOL)currentProcessHasLocationdEffectiveBundleEntitlement;
+ (BOOL)currentProcessIsFirstPartyCalendarApp;
+ (BOOL)currentProcessHasAllowSuggestionsEntitlement;
+ (BOOL)currentProcessHasTestingEntitlement;
+ (id)_currentProcessValueForEntitlement:expectedType:;
+ (BOOL)currentProcessHasBooleanEntitlement:;
+ (BOOL)currentProcessHasBirthdayModificationEntitlement;
+ (BOOL)currentProcessHasSyncClientEntitlement;
+ (BOOL)currentProcessIsDataAccess;
+ (BOOL)currentProcessIsCalendarDaemon;
@end
