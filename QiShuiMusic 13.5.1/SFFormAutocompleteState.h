@interface SFFormAutocompleteState : NSObject
@property (nonatomic) q action;
@property (nonatomic) _SFFormAutoFillInputSession inputSession;
@property (nonatomic) BOOL shouldOfferToAutoFillCreditCardData;
@property (nonatomic) NSString titleOfAutoFillButton;
@property (nonatomic) WBSMultiRoundAutoFillManager multiRoundAutoFillManager;
@property (nonatomic) BOOL currentTextFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField;
@property (nonatomic) SFFormAutoFillFrameHandle frame;
@property (nonatomic) WBSFormControlMetadata textFieldMetadata;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)updateSuggestions;
- (void)autoFill;
- (long long)action;
- (void)setAction:;
- (id)frame;
- (void)autoFillTextSuggestion:;
- (void).cxx_destruct;
- (void)oneTimeCodeProviderReceivedCode:;
- (void)performPageLevelAutoFill;
- (void)invalidate;
- (void)contactPicker:didSelectContact:;
- (void)contactPickerDidCancel:;
- (void)_clearCachedCredentials;
- (void)creditCardCaptureViewControllerDidCancel:;
- (void)credentialListViewController:didFinishWithCredential:completion:;
- (void)presentUIForPasswordCredentialAuthenticationViewController:;
- (void)passwordCredentialAuthenticationViewController:didFinishWithCredential:error:completion:;
- (void)newAutoFillablePasskeysAvailable:;
- (void)performAutoFillWithMatchSelections:doNotFill:contact:;
- (void)dismissCustomAutoFill;
- (void)creditCardCaptureViewController:didCaptureCreditCard:;
- (id)initWithFrame:form:textField:inputSession:autoFillController:;
- (void)_updateSuggestions:;
- (void)_gatherAndShowAddressBookAutoFillSuggestionsWithCorrections;
- (void)_performAutoFill;
- (void)_gatherFormValues;
- (void)_presentContactsAccessSettingsAlert;
- (void)_setUpMultiRoundAutoFillManagerIfNecessary;
- (long long)_actionForLoginForm;
- (void)_textDidChangeInForm:textField:;
- (void)updateCachedFormMetadataAfterFilling:;
- (void)updateAutoFillButton;
- (id)titleOfAutoFillButton;
- (BOOL)_textFieldIsEmptyPasswordField;
- (BOOL)_suggestUsernamesForRegistrationIfPossible:;
- (void)_autoFillFormWithUsername:;
- (void)_setShowingKeyboardInputView:;
- (void)textDidChangeInFrame:form:textField:;
- (void)_gatherFormValuesWithCompletionHandler:;
- (id)_viewControllerToPresentFrom;
- (void)_presentViewController:presentingViewController:animated:completion:;
- (BOOL)_shouldShowPasswordOptions;
- (void)_offerToForgetSavedAccount:completionHandler:;
- (void)_getLoginFormUser:password:userIsAutoFilled:passwordIsAutoFilled:;
- (void)_fetchPotentialCredentialMatchesWithCompletion:;
- (id)_cachedPotentialCredentialMatches;
- (void)_fillSavedAccount:setAutoFilled:setAsDefaultCredential:focusFieldAfterFilling:submitForm:;
- (void)_fillCredential:setAutoFilled:setAsDefaultCredential:focusFieldAfterFilling:submitForm:;
- (void)_offerToAutoFillFromPotentialCredentialMatches;
- (void)_fillSavedAccountMatchAfterAuthenticationIfNeeded:setAsDefaultCredential:submitForm:;
- (void)_fillCredentialAfterAuthenticationIfNeeded:setAsDefaultCredential:submitForm:;
- (void)_fillOneTimeCodeAfterAuthenticationIfNeeded:inFrame:shouldSubmit:;
- (void)_suggestLoginCredentialsShowingQuickTypeKey:;
- (void)_getMatchingKeychainCredentialsIncludingCredentialsWithEmptyUsernames:withCompletion:;
- (id)_textSuggestionForCredentialDisplayData:submitForm:;
- (void)showAllPasswordsButtonTapped;
- (BOOL)_hasMatchWithUser:password:;
- (void)_getShouldOfferForgetPassword:savePassword:;
- (void)_setUserAndPasswordFieldsAutoFilled:clearPasswordField:;
- (BOOL)_shouldUsePasswordGenerationAssistanceForTextField;
- (BOOL)_passwordGenerationAssistanceAutoFillButtonEnabled;
- (long long)_passwordGenerationAssistanceAction;
- (void)_generateAndSuggestPasswordWithCompletionHandler:;
- (void)_suggestPasswordForNewAccountOrChangePasswordForm;
- (BOOL)_shouldAllowGeneratedPassword;
- (BOOL)shouldOfferToAutoFillCreditCardData;
- (BOOL)currentTextFieldLooksLikeCardSecurityCodeFieldButNotCardNumberOrCardholderField;
- (BOOL)_shouldOfferCreditCardDataAfterUserHasFilledCreditCardData:;
- (id)_sortedSingleCreditCardDataArray:;
- (void)_showCreditCardDataSuggestionsAfterUserHasFilledCreditCardData;
- (void)_fillCreditCardDataAfterAuthenticationIfNeeded:;
- (void)_fillSingleCreditCardDataValue:creditCardDataType:;
- (BOOL)_canAutoFillCreditCardData;
- (void)_updateAutoFillActionToCaptureCreditCardAndFill;
- (void)_updateCreditCardAutoFillAction;
- (void)_fillCreditCardData:;
- (void)presentUnavailableVirtualCardAlert;
- (void)captureCreditCardDataWithCameraAndFill;
- (void)_autoFillSingleCreditCardData:;
- (void)_performPageLevelCredentialAutoFill;
- (void)_performPageLevelContactAutoFill;
- (void)_finishPageLevelAutoFillWithResult:;
- (void)_showPageLevelAutoFillNotAvailableAlertForResult:;
- (id)_titleForPageLevelAutoFillNotAvailableAlertForResult:;
- (id)_messageForPageLevelAutoFillNotAvailableAlertForResult:;
- (void)_gatherAndShowAddressBookAutoFillSuggestions;
- (id)_suggestionsForAutoFillDisplayData:;
- (void)_startHideMyEmailRecordUpdate;
- (void)_autoFillHideMyEmailRecord:;
- (void)_provisionHideMyEmailRecord;
- (id)_addHideMyEmailSuggestionsIfNecessary:hideMyEmailRecord:;
- (id)_hideMyEmailSuggestionForRecord:;
- (id)_hideMyEmailCreationSuggestion;
- (void)_autoFillWithSet:;
- (void)_offerToAutoFillContact;
- (void)_autoFillDisplayData:setAutoFilled:;
- (void)_switchToCustomInputViewWithMatches:contact:;
- (void)_showOtherContactOptions;
- (id)_correctedFormMetadata:;
- (id)_bestTextFieldMetadataForMetadata:;
- (void)getTextSuggestionForStreamlinedAutoFillWithCredentialIdentity:completion:;
- (id)externalCredentialIdentities;
- (id)_textSuggestionForExternalCredentialIdentity:submitForm:;
- (BOOL)_shouldAllowExternalPasswordAutoFillOnURL:;
- (void)_fillPasswordCredentialIdentity:submitForm:;
- (void)_fillASPasswordCredential:needsAuthentication:setAutoFilled:submitForm:;
- (id)_actionForPresentingPasswordManagerExtension:completionHandler:;
- (void)_presentCredentialListForExtension:completionHandler:;
- (id)inputSession;
- (id)multiRoundAutoFillManager;
- (id)textFieldMetadata;
+ (void)_getMatchesFromFormProtectionSpace:matchesFromOtherProtectionSpaces:withFormURL:credentialMatches:lastGeneratedPassword:currentUser:currentPassword:forUserNamesOnly:;
+ (BOOL)_shouldSaveCredentialsInProtectionSpace:;
@end
