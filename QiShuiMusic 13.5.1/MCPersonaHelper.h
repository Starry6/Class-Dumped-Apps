@interface MCPersonaHelper : NSObject
+ (id)createEnterprisePersona:passcode:;
+ (void)removePersona:;
+ (id)performBlockUnderPersona:block:;
+ (id)managedAppleIDNameWithPersonaID:;
+ (void)untrackAllDirtyPersonas;
+ (id)performBlockUnderPersonalPersona:;
+ (BOOL)isCurrentPersonaEnterprise;
+ (id)updateManagementInformationForAppleAccountWithPersonaID:descriptionName:managingSourceName:;
+ (id)currentPersonaID;
+ (id)accountIdentifierForAppleAccountWithPersonaID:;
+ (BOOL)adoptPersona:error:;
+ (id)fetchDirtyPersonaIDs;
+ (id)appleAccountWithPersonaID:;
+ (void)untrackDirtyPersona:;
+ (void)signOutEnterpriseAccountWithPersonaID:;
+ (void)removeExistingEnterprisePersonaAndAccountsAsynchronously;
+ (void)removePersonaAndAccountsWithPersonaID:;
+ (BOOL)personaWithUniqueIdentifierExists:;
+ (void)trackDirtyPersona:;
@end
