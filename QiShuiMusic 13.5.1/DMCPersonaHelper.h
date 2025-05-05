@interface DMCPersonaHelper : NSObject
+ (id)performBlockUnderPersona:block:;
+ (id)performBlockUnderPersonalPersona:;
+ (BOOL)isCurrentPersonaEnterprise;
+ (id)currentPersonaID;
+ (void)removePersonaAndAccountsWithPersonaID:;
+ (id)enterprisePersonaIdentifier;
+ (id)createEnterprisePersonaWithDevicePasscode:error:;
+ (BOOL)removePersona:error:;
+ (id)currentPersonaTypeString;
+ (id)enterprisePersonaDisplayName;
+ (void)setPersonaIdentifierForApps:personaID:completionHandler:;
@end
