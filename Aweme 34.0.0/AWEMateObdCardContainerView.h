@interface AWEMateObdCardContainerView : UIView
@property (nonatomic) AWEMateObdCardViewModel viewModel;
@property (nonatomic) AWEMateObdCardView cardView;
@property (nonatomic) AWEUserRecommendBigCardFooterView footerView;
@property (nonatomic) UIView slideUpHintView;
@property (nonatomic) AWEGradientView gradientBGView;
@property (nonatomic) AWEGradientView defaultBGView;
@property (nonatomic) BOOL isCardDisplaying;
- (void)configWithViewModel:;
- (void)setIsCardDisplaying:;
- (BOOL)isCardDisplaying;
- (id)slideUpHintView;
- (void)setSlideUpHintView:;
- (id)gradientBGView;
- (id)defaultBGView;
- (void)setGradientBGView:;
- (void)setDefaultBGView:;
- (void)setFooterView:;
- (id)footerView;
- (id)viewModel;
- (id)initWithFrame:;
- (void)setViewModel:;
- (void).cxx_destruct;
- (id)cardView;
- (void)setCardView:;
- (void)didEndDisplaying;
- (void)willDisplay;
@end
