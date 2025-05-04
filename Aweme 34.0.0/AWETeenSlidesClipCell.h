@interface AWETeenSlidesClipCell : UICollectionViewCell
@property (nonatomic) UIImageView underImageView;
@property (nonatomic) UIImageView imageView;
- (id)underImageView;
- (void)setUnderImageView:;
- (void)p_setupViews;
- (void)p_updateImageViewSize;
- (long long)p_scaleModeWithImageSize:;
- (void)setImageModel:placeholderImage:index:totalCount:logExtra:;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
@end
