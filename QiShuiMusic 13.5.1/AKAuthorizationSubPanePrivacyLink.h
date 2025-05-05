@interface AKAuthorizationSubPanePrivacyLink : AKAuthorizationSubPane
- (void)addToStackView:context:;
- (void)addToConstraints:context:;
- (id)initWithPrivacyLinkType:;
- (id)_createPrivacyLinkWithType:;
@end
