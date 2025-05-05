@interface DAKeychain : NSObject
- (BOOL)canAccessCredentialsWithAccessibility:;
- (id)_secAccessibilityForDAKeychainAccessibility:;
- (int)_daKeychainAccessibilityForSecAccessibility:;
- (id)_DACopyMutableQueryForAccountWithPersistentUUID:;
- (id)_DACopyMutableAttributesForAccountWithPersistentUUID:accessibility:;
- (id)passwordForAccountWithPersistentUUID:expectedAccessibility:shouldSetAccessibility:passwordExpected:;
- (void)removePersistentCredentials;
- (BOOL)setPassword:forAccount:withPersistentUUID:withAccessibility:;
- (BOOL)removePasswordForAccount:withPersistentUUID:;
- (void)migratePasswordForAccount:;
- (BOOL)saveKeychainInformationsForURL:andPassword:withAccessibility:;
- (id)loadKeychainInformationsForURL:;
- (void)removeKeychainInformationsForURL:;
- (id)guessPasswordForURL:;
+ (id)sharedKeychain;
@end
