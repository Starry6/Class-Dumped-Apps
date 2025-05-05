@interface AAPersonaUtility : NSObject
+ (id)findEnterprisePersonaIdentifier;
+ (BOOL)personaConsistencyCheck:;
+ (void)verifyAndFixPersonaIfNeeded:desiredContext:;
+ (BOOL)isDataSeparatedAccount:;
@end
