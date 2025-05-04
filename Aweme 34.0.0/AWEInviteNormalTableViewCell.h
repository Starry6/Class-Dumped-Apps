@interface AWEInviteNormalTableViewCell : UITableViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subtitleLabel;
@property (nonatomic) UIImageView arrowView;
@property (nonatomic) MASConstraint topConstraint;
@property (nonatomic) MASConstraint centerConstraint;
- (void)configWithModel:;
- (id)centerConstraint;
- (void)setCenterConstraint:;
- (void)setTopConstraint:;
- (void)setAvatarView:;
- (void)setHighlighted:animated:;
- (void)setSubtitleLabel:;
- (id)avatarView;
- (id)topConstraint;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)subtitleLabel;
- (id)arrowView;
- (void)setArrowView:;
- (void)_setupUI;
+ (id)identifier;
+ (double)suggestedHeight;
@end
