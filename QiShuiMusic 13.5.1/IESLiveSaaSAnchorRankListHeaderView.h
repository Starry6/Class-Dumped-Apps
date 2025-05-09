@interface IESLiveSaaSAnchorRankListHeaderView : UIView
@property (nonatomic) IESLiveSaaSCountDownLabel countDownLabel;
@property (nonatomic) IESLiveSaaSAnchorRankListViewModel viewModel;
@property (nonatomic) UIButton rewardDescriptionButton;
@property (nonatomic) UILabel chartsDescriptionLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIView scalableView;
@property (nonatomic) IESLiveSaaSAnchorRankListRewardBubbleView bubbleView;
- (void)didClickRewardDescriptionButton;
- (void)bindViewModel;
- (id)chartsDescriptionLabel;
- (id)countDownLabel;
- (id)rewardDescriptionButton;
- (id)scalableView;
- (void)setChartsDescriptionLabel:;
- (void)setCountDownLabel:;
- (void)setRewardDescriptionButton:;
- (void)setScalableView:;
- (void)startRewardBubbleAnimation:;
- (void)setupConstraints;
- (id)viewModel;
- (void)layoutSubviews;
- (id)subtitleLabel;
- (void)setSubtitleLabel:;
- (id)initWithViewModel:;
- (void).cxx_destruct;
- (void)setViewModel:;
- (id)bubbleView;
- (void)setBubbleView:;
+ (double)labelFontSize;
@end
