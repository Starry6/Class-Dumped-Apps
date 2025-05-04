@interface AWESpecialPersonCollectionViewCell : UICollectionViewCell
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIImageView verifyBadgeView;
@property (nonatomic) UIButton addButton;
@property (nonatomic) @? addBtnClickBlock;
- (void)p_setupUI;
- (id)verifyBadgeView;
- (void)setVerifyBadgeView:;
- (void)updateWithModel:addBtnClickBlock:;
- (void)addBtnClick:;
- (void)setAddBtnClickBlock:;
- (id)addBtnClickBlock;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)nameLabel;
- (void).cxx_destruct;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (id)addButton;
- (void)setAddButton:;
+ (id)identifier;
@end
