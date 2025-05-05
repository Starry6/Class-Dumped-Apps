@interface IESLivePKFlexActivityRegisterAnchorCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarImageView;
@property (nonatomic) UIButton friendTag;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) FlexActivity_RegisteredUser registeredUser;
- (id)friendTag;
- (id)registeredUser;
- (void)setFriendTag:;
- (void)setRegisteredUser:;
- (void)setDescriptionLabel:;
- (id)initWithFrame:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (id)nameLabel;
- (void)setNameLabel:;
- (id)avatarImageView;
- (void)setAvatarImageView:;
- (void)setupSubviews;
- (void)updateWithUser:;
@end
