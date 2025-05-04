@interface AWEIMNoticeSideTableviewCell : UITableViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel subTitleLabel;
@property (nonatomic) UIView topBoxView;
@property (nonatomic) UIView bottomBoxView;
- (void)__setupUI;
- (id)topBoxView;
- (void)setTopBoxView:;
- (void)setBottomBoxView:;
- (id)bottomBoxView;
- (void)setModel:context:;
- (id)initWithStyle:reuseIdentifier:;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setSubTitleLabel:;
- (id)subTitleLabel;
@end
