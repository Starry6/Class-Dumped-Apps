@interface ASCredentialRequestCABLEConsentViewController : ASCredentialRequestPaneViewController
@property (nonatomic) ASCAuthorizationPresentationContext presentationContext;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)presentationContext;
- (void).cxx_destruct;
- (long long)tableView:numberOfRowsInSection:;
- (void)viewDidLoad;
- (id)_titleText;
- (void)_continueButtonPressed;
- (void)_setUpIconView;
- (id)initWithPresentationContext:;
- (long long)numberOfTableRows;
- (void)_setUpTitleView;
- (void)_setUpContinueButton;
- (void)_addHeaderSpacerViewWithCustomSpacingAfter:;
@end
