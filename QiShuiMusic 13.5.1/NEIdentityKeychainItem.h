@interface NEIdentityKeychainItem : NEKeychainItem
- (void)sync;
- (id)copyWithZone:;
- (id)initWithPassword:domain:accessGroup:;
- (id)copyQueryWithReturnTypes:;
- (id)copyPassword;
- (void)syncUsingConfiguration:accountName:passwordType:identifierSuffix:;
+ (id)copyIdentities:fromDomain:;
+ (id)importPKCS12Data:passphrase:;
@end
