@interface AKAlertHandler : NSObject
@property (nonatomic) <AKAlertHandlerUIProvider> uiProvider;
- (id)uiProvider;
- (void)setUiProvider:;
- (void).cxx_destruct;
- (void)showAlertForError:withCompletion:;
- (void)showAlertForError:withAuthKitAccount:withCompletion:;
- (void)_showAlertForInvalidContextWithCompletion:;
- (void)_showAlertForMissingAppleAccountWithCompletion:;
- (void)_showAlertForAccountNotSupportedWithCompletion:;
- (void)_showAlertForUnverifiedEmailWithCompletion:;
- (void)_showAlertForInsufficientSecurityLevelWithError:completionHandler:;
- (void)_showAlertForCannotFindServerWithCompletion:;
- (void)_showAlertForUnderageAccount:withCompletion:;
- (void)_showAlertForPasscodeSetupWithCompletion:;
- (BOOL)_shouldShowAlertForManagedAccount:error:;
- (void)_showAlertForManagedAccount:error:withCompletion:;
- (BOOL)showAlert:primaryAction:altAction:;
- (BOOL)showAlert:primaryAction:altAction:cancelAction:;
- (id)notificationDictionaryWithTitle:message:defaultButton:alternateButton:;
- (void)_openSpyglass;
- (void)_openPasscodeSetup;
- (void)_openUpgradeAccountSecurityLevelWithBundleID:;
- (id)_URLWithString:byAppendingParameters:;
+ (id)sharedInstance;
@end
