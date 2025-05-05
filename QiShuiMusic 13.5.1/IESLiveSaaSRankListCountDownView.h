@interface IESLiveSaaSRankListCountDownView : UIView
@property (nonatomic) IESLiveSaaSCountDownLabel countDownLabel;
@property (nonatomic) UILabel rightLabel;
@property (nonatomic) UILabel unitLabel;
@property (nonatomic) CAGradientLayer gradientLayer;
@property (nonatomic) UIButton rewardDescriptionButton;
@property (nonatomic) IESLiveSaaSRankListStore store;
@property (nonatomic) IESLiveSaaSRankListModel listModel;
- (void)didClickRewardDescriptionButton;
- (id)countDownLabel;
- (id)initWithListModel:andStore:;
- (id)rewardDescriptionButton;
- (void)setCountDownLabel:;
- (void)setListModel:;
- (void)setRewardDescriptionButton:;
- (void)setStore:;
- (void)layoutSubviews;
- (id)gradientLayer;
- (id)listModel;
- (void).cxx_destruct;
- (id)store;
- (void)setGradientLayer:;
- (id)rightLabel;
- (id)unitLabel;
- (void)setUnitLabel:;
- (void)setRightLabel:;
+ (double)labelFontSize;
@end
