@interface CNAutocompleteSuggestionsCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString displayString;
- (void)setupConstraints;
- (id)displayString;
- (id)avatarView;
- (void)setAvatarView:;
- (void)setSelected:;
- (void)setImage:;
- (id)initWithFrame:;
- (void)setDisplayString:;
- (void).cxx_destruct;
- (id)nameLabel;
- (id)image;
- (void)setNameLabel:;
- (BOOL)useAccessibleLayout;
+ (id)cellIdentifier;
@end
