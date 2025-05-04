@interface AWEImageCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) NSURL imgURL;
@property (nonatomic) NSNumber imageIndex;
@property (nonatomic) NSArray imageArray;
@property (nonatomic) AWEImageCountView imageCountView;
- (id)imageArray;
- (void)setImageArray:;
- (id)imgURL;
- (void)setImgURL:;
- (void)updateImageCountView:;
- (id)imageCountView;
- (void)openLargeImage;
- (void)galleryWithParams:;
- (void)triggerImageCountView:;
- (void)setImageCountView:;
- (void)dealloc;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)updateImageView;
- (id)imageIndex;
- (void)setImageIndex:;
@end
