@interface ISServerAuthenticationOperation : ISOperation
@property (nonatomic) NSNumber authenticatedAccountDSID;
@property (nonatomic) NSURL redirectURL;
@property (nonatomic) ISDialogButton selectedButton;
@property (nonatomic) ISDialogButton performedButton;
@property (nonatomic) SSAuthenticationContext authenticationContext;
@property (nonatomic) ISDialog dialog;
@property (nonatomic) BOOL performsButtonAction;
@property (nonatomic) Q authenticatedAccountCredentialSource;
- (id)redirectURL;
- (id)init;
- (void)dealloc;
- (id)authenticationContext;
- (id)authenticatedAccountDSID;
- (void)setRedirectURL:;
- (void)setAuthenticationContext:;
- (void)run;
- (id)dialog;
- (void)setDialog:;
- (id)selectedButton;
- (void)setSelectedButton:;
- (unsigned long long)authenticatedAccountCredentialSource;
- (void)setAuthenticatedAccountCredentialSource:;
- (void)setAuthenticatedAccountDSID:;
- (id)performedButton;
- (void)setPerformedButton:;
- (BOOL)performsButtonAction;
- (void)setPerformsButtonAction:;
@end
