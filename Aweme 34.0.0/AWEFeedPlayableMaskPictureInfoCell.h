@interface AWEFeedPlayableMaskPictureInfoCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) @? clickBlock;
- (void)configWith:;
- (void)setClickBlock:;
- (id)clickBlock;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)cellTapped;
@end
