@interface AADataclassManager : NSObject
- (id)initWithAccountStore:;
- (id)init;
- (void).cxx_destruct;
- (id)whitelistedDataclassesForAppleAccountClassBasic;
- (id)whitelistedDataclassesForAppleAccountClassFull;
- (id)_userVisibleDataclasses;
- (id)_nonVisibleServiceDataclass;
- (id)blackListedMacOSDataclasses;
- (id)_filteredDataclassesForAccountClass:;
- (id)filteredServerProvidedFeatures:forAccount:;
- (id)appBundleIdentifierForDataclass:;
- (BOOL)_isRestrictedForDataclass:;
- (BOOL)isSystemAppRestrictedOrRemovedForDataclass:;
- (BOOL)_hideDataclassWhenAppRemoved:;
- (BOOL)canAutoEnableDataclass:forAccount:;
- (BOOL)shouldProvisionDataclass:forAccount:;
- (BOOL)_shouldProvisionNotesForAccount:;
- (BOOL)_shouldProvisionRemindersForAccount:;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForAccount:completion:;
- (void)enableDataclassesWithoutLocalDataDataclassActionsForDataclasses:fromAccount:completion:;
- (id)buildAutoEnableableDataclassesAndActionsForAccount:dataclassesForEnablement:;
- (BOOL)isDataclassActionSafeForAutoEnablement:;
- (id)filterDataclassesForPossibleAutoEnablementForAccount:;
+ (id)sharedManager;
+ (id)appBundleIdentifierDictionary;
@end
