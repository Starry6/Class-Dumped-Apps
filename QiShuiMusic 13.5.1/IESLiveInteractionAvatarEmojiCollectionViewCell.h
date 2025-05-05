@interface IESLiveInteractionAvatarEmojiCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImage defaultImage;
@property (nonatomic) UILabel avatarTitle;
- (void)setAvatarTitle:;
- (id)avatarTitle;
- (void)configWithModel:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)defaultImage;
- (void)setupUI;
- (void)setDefaultImage:;
+ (id)identifier;
@end
