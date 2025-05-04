@interface AWERVLVActorTableViewCellCell : UICollectionViewCell
@property (nonatomic) BDImageView avatarImg;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel roleLabel;
- (id)roleLabel;
- (void)setRoleLabel:;
- (void)updateWithActorModel:;
- (id)avatarImg;
- (void)setAvatarImg:;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (void)setupUI;
@end
