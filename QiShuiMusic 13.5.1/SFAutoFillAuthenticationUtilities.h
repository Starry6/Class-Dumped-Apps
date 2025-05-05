@interface SFAutoFillAuthenticationUtilities : NSObject
+ (id)passcodePromptForViewingSavedAccounts;
+ (id)passcodePromptForFillingSavedAccount;
+ (id)passcodePromptForFillingCreditCard;
+ (id)passcodePromptForFillingTimeBasedOneTimeCode;
+ (id)customAuthenticationTitleForViewingSavedAccounts;
+ (id)customAuthenticationTitleForFillingSavedPassword;
+ (id)customAuthenticationTitleForFillingSavedPasskey;
+ (id)customAuthenticationTitleForFillingCreditCard;
+ (id)customAuthenticationTitleForFillingTimeBasedOneTimeCode;
+ (id)customAuthenticationTitleForLoggingInWithSavedAccountOnWebsite:;
+ (id)passcodePromptForLoggingInWithSavedAccountOnWebsite:;
@end
