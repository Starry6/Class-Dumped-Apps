@interface AWEIMPanelButtonView : AWEIMPanelView
@property (nonatomic) UIStackView stackView;
@property (nonatomic) UIButton primaryButton;
@property (nonatomic) UIButton secondaryButton;
- (void)p_setupUI;
- (void)renderWithViewModel:;
- (void)primaryButtonPressed:;
- (id)stackView;
- (void)setStackView:;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)secondaryButton;
- (void)setSecondaryButton:;
- (id)primaryButton;
- (void)setPrimaryButton:;
- (void)secondaryButtonPressed:;
@end
