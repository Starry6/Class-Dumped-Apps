@interface CNContactSuggestionsCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView avatarView;
@property (nonatomic) UIImageView checkImageView;
@property (nonatomic) UIImageView checkImageBackgroundView;
@property (nonatomic) UILabel nameLabel;
@property (nonatomic) UIImage image;
@property (nonatomic) NSString displayString;
- (void)setupConstraints;
- (id)displayString;
- (void)layoutSubviews;
- (id)avatarView;
- (id)preferredLayoutAttributesFittingAttributes:;
- (void)setAvatarView:;
- (void)setSelected:;
- (void)setImage:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void)traitCollectionDidChange:;
- (void)setDisplayString:;
- (void).cxx_destruct;
- (id)nameLabel;
- (id)image;
- (void)setNameLabel:;
- (BOOL)useAccessibleLayout;
- (void)setCheckMarkHidden:;
- (void)setUpCheckMarkConstraints;
- (id)checkImageView;
- (void)setCheckImageView:;
- (id)checkImageBackgroundView;
- (void)setCheckImageBackgroundView:;
+ (id)cellIdentifier;
@end
