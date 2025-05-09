@interface AWEProfileEditFlowStepView : AWEProfileEditFlowView
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton closeButton;
@property (nonatomic) UIStackView buttonsStackView;
@property (nonatomic) AFDButton prevButton;
@property (nonatomic) AFDButton nextButton;
@property (nonatomic) UIView bodyView;
@property (nonatomic) AWEProfileEditFlowStepViewModel viewModel;
@property (nonatomic) MASConstraint bodyViewBottomConstraint;
@property (nonatomic) MASConstraint bodyViewBottomConstraintForButtonsHidden;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL buttonsHidden;
- (void)configWithViewModel:;
- (void)tapCloseButton:;
- (id)prevButton;
- (void)tapNextButton:;
- (void)setButtonsHidden:animated:;
- (BOOL)buttonsHidden;
- (void)tapPrevButton:;
- (void)setBodyViewBottomConstraint:;
- (void)setBodyViewBottomConstraintForButtonsHidden:;
- (id)bodyViewBottomConstraintForButtonsHidden;
- (id)bodyViewBottomConstraint;
- (void)setButtonsHidden:;
- (void)setPrevButton:;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setTitleLabel:;
- (void)viewWillAppear:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitle:;
- (BOOL)hasAppeared;
- (id)bodyView;
- (void)setBodyView:;
- (id)nextButton;
- (void)setNextButton:;
- (void)setCloseButton:;
- (id)closeButton;
- (void)setHasAppeared:;
- (id)buttonsStackView;
- (void)setButtonsStackView:;
@end
