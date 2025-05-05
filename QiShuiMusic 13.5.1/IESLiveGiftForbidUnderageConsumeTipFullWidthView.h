@interface IESLiveGiftForbidUnderageConsumeTipFullWidthView : UIView
@property (nonatomic) UIView containerView;
@property (nonatomic) IESLiveGradientView backgroundGradientView;
@property (nonatomic) UIImageView tipImageView;
@property (nonatomic) UILabel tipTextLabel;
@property (nonatomic) UIButton closeTipButton;
@property (nonatomic) IESLiveGiftForbidUnderageConsumeTipViewModel viewModel;
- (void)closeButtonIsClicked;
- (id)closeTipButton;
- (void)setCloseTipButton:;
- (void)setTipImageView:;
- (void)setTipTextLabel:;
- (id)tipImageView;
- (id)tipTextLabel;
- (id)viewModel;
- (id)containerView;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (void)setupUI;
- (id)initWithFrame:viewModel:;
- (id)backgroundGradientView;
- (void)setBackgroundGradientView:;
@end
