@interface AWESearchAlbumHorizontalLayoutCollectionViewCell : UICollectionViewCell
@property (nonatomic) BDImageView imageView;
- (id)getCurrentImageView;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)updateImage:;
+ (double)calculateWidthWithHeight:model:;
+ (id)getImageSizeWithHeight:model:;
@end
