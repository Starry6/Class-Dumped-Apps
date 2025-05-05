@interface MFOSXServerIMAPAccount : IMAPAccount
- (void)setPassword:;
- (id)displayName;
- (void).cxx_destruct;
- (id)_credentialCreateIfNecessary:error:;
- (BOOL)derivesDeliveryAccountInfoFromMailAccount;
- (id)_deliveryAccountCreateIfNeeded:;
+ (id)accountTypeIdentifier;
+ (id)accountTypeString;
+ (id)displayedAccountTypeString;
+ (BOOL)primaryDeliveryAccountIsDynamic;
+ (id)newChildAccountWithParentAccount:error:;
+ (id)_authSchemeForAuthenticationMethod:;
@end
