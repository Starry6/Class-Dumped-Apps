@interface UIKBAutofillController : NSObject
@property (nonatomic) UIColor textFieldOrigColor;
@property (nonatomic) NSMutableDictionary autofillGroup;
@property (nonatomic) NSMutableDictionary fallbackAutofillGroup;
@property (nonatomic) q delegateNeedsAutofillMode;
@property (nonatomic) BOOL shouldSaveAutofill;
- (void)optOutASPInTextField;
- (BOOL)preferFallbackAutofillGroup;
- (void)clearAutofillGroup;
- (void)_setAutofillGroup:;
- (void)trackResponderForAutofillIfNeeded:;
- (void)setDelegateNeedsAutofillMode:;
- (long long)signUpSignalFromViewControllerHierarchy:;
- (id)init;
- (void)didOptOutOfAutofillSignup;
- (id)autofillGroup;
- (id)fallbackAutofillGroup;
- (long long)signUpSignalFromButton:;
- (void)clearASPVisualEffectsInTextField:;
- (id)autofillContextForInputDelegate:;
- (void)setShouldSaveAutofill:;
- (long long)contactAutofillModeWithAutofillGroup:responders:;
- (void)enumeratePasswordFieldsUsingBlock:;
- (void)_clearASPInTextField:;
- (void)setFallbackAutofillGroup:;
- (id)phoneKeywordSet;
- (id)accessibilitySignupKeywordList;
- (id)emailKeywordSet;
- (void)updateAutofillContextForInputDelegate:;
- (void)addTemporaryTextColorToTextField:;
- (long long)_needAutofillCandidate:delegateAsResponder:;
- (void)clearASPInPasswordFields;
- (void).cxx_destruct;
- (long long)containsIndicationInText:withAccessibilityHints:;
- (id)addressKeywordSet;
- (id)loginKeywordList;
- (id)textSignalsForResponder:;
- (BOOL)_prohibitAutofill:needASPKeyboard:;
- (BOOL)containsUsernamePasswordPairsInAutofillGroup:;
- (long long)needAutofillCandidate:delegateAsResponder:keyboardState:;
- (id)signupKeywordList;
- (void)showASPInTextField:isRightToLeft:;
- (long long)doTraits:matchTextContentType:;
- (long long)delegateNeedsAutofillMode;
- (id)accessibilityLoginKeywordList;
- (id)searchKeywordSet;
- (BOOL)shouldSaveAutofill;
- (BOOL)shouldLoadASPForResponder:;
- (id)processLocalizedString:;
- (void)removeTemporaryTextColorFromTextField:;
- (id)contactAutoFillKeywordsForKey:value:localizedKeywords:;
- (long long)signUpSignalFromNavBarItem:;
- (void)clearFallbackAutofillGroup;
- (void)setTextFieldOrigColor:;
- (void)handleWebviewCredentialsSaveForResponder:WebsiteURL:user:password:passwordIsAutoGenerated:;
- (id)textFieldOrigColor;
- (void)handleAutofillCredentialSaveIfNeeded:fromASP:;
- (BOOL)signupHintForUsername:password:responder:;
+ (unsigned long long)translateToTextInputAutofillMode:;
+ (long long)translateToUIAutofillMode:;
@end
