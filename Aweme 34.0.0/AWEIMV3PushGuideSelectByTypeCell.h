@interface AWEIMV3PushGuideSelectByTypeCell : UITableViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel contentLabel;
@property (nonatomic) AWEIMPushGuideSelection model;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView rightStatusImageView;
@property (nonatomic) UIView containerView;
- (void)p_setupUI;
- (void)configWithModel:isActive:;
- (id)rightStatusImageView;
- (void)setRightStatusImageView:;
- (void)setModel:;
- (id)containerView;
- (void)awakeFromNib;
- (id)model;
- (void)setContainerView:;
- (id)initWithStyle:reuseIdentifier:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setSelected:animated:;
- (void)setNameLabel:;
- (id)avatarImageView;
- (id)contentLabel;
- (void)setAvatarImageView:;
- (void)setContentLabel:;
@end
