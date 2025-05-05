@interface AKAuthorizationFirstTimePaneViewController : AKAuthorizationPaneViewController
@property (nonatomic) AKAuthorizationViewController authorizationViewController;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)authorizationViewController;
- (BOOL)shouldEmbedContentTrayIfNeeded;
- (void)_continueButtonSelected:;
- (void)_addTitleToContext:;
- (void)_addPrivacyLinkToContext:;
- (void)_addContinueButtonToContext:title:;
- (void)setAuthorizationViewController:;
@end
