@interface AWEIMMixLoraUserCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView loraImageView;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel countLabel;
@property (nonatomic) AWEIMMixLoraUserCellModel model;
- (void)__setupUI;
- (void)renderModel:;
- (void)handleThemeChangeNotification;
- (id)loraImageView;
- (void)setLoraImageView:;
- (void)setModel:;
- (id)initWithFrame:;
- (id)model;
- (void)setTitleLabel:;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)countLabel;
- (void)setCountLabel:;
@end
