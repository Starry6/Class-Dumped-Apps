@interface IESLiveInteractionEmojiCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView lockImageView;
@property (nonatomic) UIImage defaultImage;
@property (nonatomic) IESLiveGradientBackgroundLabel tagLabel;
@property (nonatomic) HTSPaddingLabel bottomLabel;
@property (nonatomic) UIImageView imageView;
- (void)configWithModel:;
- (void)setTagLabel:;
- (id)tagLabel;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (id)imageView;
- (void)setImageView:;
- (id)defaultImage;
- (void)setupUI;
- (void)setDefaultImage:;
- (id)bottomLabel;
- (void)setBottomLabel:;
- (id)lockImageView;
- (void)setLockImageView:;
+ (id)identifier;
+ (id)cellSize;
@end
