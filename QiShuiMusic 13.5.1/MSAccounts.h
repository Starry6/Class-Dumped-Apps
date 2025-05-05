@interface MSAccounts : MSMailDefaultService
- (void)_simulateServicesMethod:arguments:callback:;
- (void)_listAccountKeys:originatingBundleID:sourceAccountManagement:handler:;
+ (BOOL)canSendMail;
+ (BOOL)hasActiveAccounts;
+ (id)attachmentCapabilities;
+ (void)accountValuesForKeys:originatingBundleID:sourceAccountManagement:launchMobileMail:completionBlock:;
+ (id)customSignatureForSendingEmailAddress:;
+ (BOOL)canSendMailSourceAccountManagement:;
+ (void)accountValuesForKeys:completionBlock:;
+ (void)accountValuesForKeys:launchMobileMail:completionBlock:;
+ (BOOL)deleteAccountsWithUniqueIdentifiers:error:;
+ (void)mailboxListingForAccountWithUniqueIdentifier:keys:completionBlock:;
+ (BOOL)setPushStateForMailboxWithPath:account:pushState:error:;
@end
