@interface AWEFeedPlayableMaskBubbleView : UIImageView
@property (nonatomic) UIView iconPlaceholder;
@property (nonatomic) UIImageView iconView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel valueLabel;
@property (nonatomic) UILabel unitLabel;
@property (nonatomic) AWEFeedPlayableRewardBeforeModel rewardBeforeModel;
- (void)configWithModel:;
- (void)constraintSubviews;
- (void)setRewardBeforeModel:;
- (id)rewardBeforeModel;
- (id)initWithFrame:;
- (id)iconView;
- (void)setIconView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setValueLabel:;
- (id)valueLabel;
- (void)setUnitLabel:;
- (id)unitLabel;
- (id)iconPlaceholder;
- (void)setIconPlaceholder:;
@end
