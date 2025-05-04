@interface AWEManageVideoCommentAreaTableViewCell : UITableViewCell
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UIButton explainButton;
@property (nonatomic) DUXSettingSwitch switchButton;
@property (nonatomic) AWEManageVideoCommentAreaSettingItemModel model;
@property (nonatomic) Q cornerType;
- (void)switchStatusChanged:;
- (void)setupCorners;
- (void)highlightWithAnimation;
- (void)highlightWithAnimationWithDuration:dismissDelay:;
- (void)setSwitchButton:;
- (id)explainButton;
- (void)goExplainPage:;
- (void)setExplainButton:;
- (void)setModel:;
- (id)model;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (id)iconImageView;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)configureWithModel:;
- (unsigned long long)cornerType;
- (void)setCornerType:;
- (id)switchButton;
@end
