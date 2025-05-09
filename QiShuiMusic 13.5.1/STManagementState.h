@interface STManagementState : NSObject
@property (nonatomic) BOOL cachedShouldRequestMoreTime;
@property (nonatomic) BOOL cachedIsRestrictionsPasscodeSet;
@property (nonatomic) NSXPCConnection connection;
@property (nonatomic) BOOL contactsEditable;
@property (nonatomic) BOOL needsToSetRestrictionsPasscode;
@property (nonatomic) BOOL isRestrictionsPasscodeSet;
@property (nonatomic) BOOL shouldRequestMoreTime;
- (id)communicationPoliciesWithError:;
- (id)init;
- (void)requestToManageContactsForDSID:completionHandler:;
- (id)shouldAllowOneMoreMinuteForWebDomain:error:;
- (void)isExplicitContentRestricted:;
- (void)dealloc;
- (void)setScreenTimeSyncingEnabled:completionHandler:;
- (id)shouldAllowOneMoreMinuteForCategoryIdentifier:error:;
- (void)isLocationSharingModificationAllowedForDSID:completionHandler:;
- (BOOL)performMigrationFromMCXSettings:error:;
- (id)shouldAllowOneMoreMinuteForBundleIdentifier:error:;
- (BOOL)clearRestrictionsPasscodeWithError:;
- (void)communicationPoliciesWithCompletionHandler:;
- (void)lastModifcationDateForDSID:completionHandler:;
- (void)setScreenTimeEnabled:completionHandler:;
- (void)applyIntroductionModel:forDSID:completionHandler:;
- (void)screenTimeStateWithCompletionHandler:;
- (void)isRestrictionsPasscodeSet:;
- (void)setCachedIsRestrictionsPasscodeSet:;
- (BOOL)enableScreenTimeForDSID:error:;
- (void)shouldRequestMoreTime:;
- (void)lastCommunicationLimitsModifcationDateForDSID:completionHandler:;
- (void)setManageContactsEnabled:forDSID:completionHandler:;
- (void)screenTimeSyncStateWithCompletionHandler:;
- (void)setCachedShouldRequestMoreTime:;
- (void)isContentPrivacyEnabledForDSID:completionHandler:;
- (id)connection;
- (void).cxx_destruct;
- (void)setConnection:;
- (BOOL)cachedIsRestrictionsPasscodeSet;
- (BOOL)setScreenTimeEnabled:error:;
- (BOOL)needsToSetRestrictionsPasscode;
- (BOOL)shouldRequestMoreTime;
- (BOOL)cachedShouldRequestMoreTime;
- (void)communicationPoliciesForDSID:withCompletionHandler:;
- (void)contactManagementStateForDSID:completionHandler:;
- (BOOL)contactsEditable;
- (BOOL)permitWebFilterURL:pageTitle:error:;
- (BOOL)isRestrictionsPasscodeSet;
- (void)setLocationSharingModificationAllowed:forDSID:completionHandler:;
- (id)primaryiCloudCardDAVAccountIdentifierWithError:;
@end
