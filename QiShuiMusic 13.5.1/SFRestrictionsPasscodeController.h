@interface SFRestrictionsPasscodeController : NSObject
+ (BOOL)settingEnabled;
+ (BOOL)validatePIN:;
+ (id)_generateSalt;
+ (void)_removeKeychainPasswordForRestrictions;
+ (void)migrateRestrictionsPasscode;
+ (id)pinFromHashAndSaltLegacyPassword;
+ (id)newHashDataForPassword:andSalt:;
+ (void)_setKeychainPasswordForRestrictions:;
+ (id)saltForHashAndSaltLegacyRestrictions;
+ (void)removePasswordForHashAndSaltLegacyRestrictions;
+ (BOOL)legacyRestrictionsInEffect;
+ (id)hashForHashAndSaltLegacyRestrictions;
+ (id)_keychainPasswordForRestrictions;
+ (BOOL)hasHashAndSaltLegacyPassword;
+ (void)_migrateRestrictionsPasscodeIfNeeded;
+ (void)setPIN:;
@end
