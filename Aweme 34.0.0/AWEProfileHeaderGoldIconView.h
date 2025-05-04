@interface AWEProfileHeaderGoldIconView : UIView
@property (nonatomic) NSString text;
@property (nonatomic) q rewardNum;
@property (nonatomic) UIView containerView;
@property (nonatomic) UILabel textLabel;
@property (nonatomic) UIImageView goldImageView;
@property (nonatomic) UILabel rewardLabel;
- (long long)rewardNum;
- (void)setRewardNum:;
- (id)rewardLabel;
- (void)setRewardLabel:;
- (id)goldImageView;
- (void)configWithText:rewardNum:;
- (void)setGoldImageView:;
- (id)textLabel;
- (id)init;
- (void)setText:;
- (id)containerView;
- (id)text;
- (void)setContainerView:;
- (void).cxx_destruct;
- (void)setTextLabel:;
- (void)setupUI;
@end
