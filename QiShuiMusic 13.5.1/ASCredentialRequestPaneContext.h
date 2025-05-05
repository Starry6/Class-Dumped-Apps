@interface ASCredentialRequestPaneContext : NSObject
@property (nonatomic) ASCredentialRequestPaneViewController paneViewController;
@property (nonatomic) UIStackView stackView;
- (id)stackView;
- (void).cxx_destruct;
- (id)initWithPaneViewController:stackView:;
- (void)addEmptyViewWithSpacing:;
- (id)paneViewController;
- (void)addSubPane:withCustomSpacingAfter:;
@end
