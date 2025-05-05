@interface CNStarkContactNameView : UIView
@property (nonatomic) CNContact contact;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) CNAvatarViewController avatarViewController;
- (void)setupConstraints;
- (id)contact;
- (id)initWithName:;
- (void).cxx_destruct;
- (id)nameLabel;
- (id)avatarViewController;
- (void)setupNameLabel;
- (void)setupAvatar;
@end
