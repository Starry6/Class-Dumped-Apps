@interface AWEUGSelectivePushGuideHeaderView : UIView
@property (nonatomic) DUXAvatar avatar;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) UILabel timeLabel;
@property (nonatomic) UIView containerView;
- (void)p_setupUI;
- (void)updateFakeViewWithTitle:content:avatarURL:;
- (void)setTimeLabel:;
- (id)initWithFrame:;
- (id)containerView;
- (void)setContainerView:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)timeLabel;
- (id)titleLabel;
- (id)avatar;
- (id)contentLabel;
- (void)setAvatar:;
- (void)setContentLabel:;
@end
