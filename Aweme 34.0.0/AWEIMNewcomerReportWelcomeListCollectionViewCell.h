@interface AWEIMNewcomerReportWelcomeListCollectionViewCell : UICollectionViewCell
@property (nonatomic) AWEIMNewcomerWelcomerModel model;
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel ownerLable;
- (void)configWithModel:context:;
- (void)__setupUI;
- (id)ownerLable;
- (void)__handleTapavatarView:;
- (void)setOwnerLable:;
- (void)setModel:;
- (void)setAvatarView:;
- (id)initWithFrame:;
- (id)avatarView;
- (id)model;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
+ (id)identifier;
@end
