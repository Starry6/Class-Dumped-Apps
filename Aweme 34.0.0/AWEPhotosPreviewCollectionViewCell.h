@interface AWEPhotosPreviewCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImage thumbnailImage;
@property (nonatomic) UILabel watermarkLabel;
@property (nonatomic) UIScrollView scrollView;
@property (nonatomic) AWEUILoadingView loadingView;
@property (nonatomic) BOOL hdImageLoaded;
@property (nonatomic) double previousScale;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) <AWEPhotosPreviewCollectionViewCellDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setThumbnailURLs:imageURLs:watermark:;
- (void)setThumbnailURLs:imageURLs:watermark:imageReqConfig:;
- (void)setHdImageLoaded:;
- (id)watermarkLabel;
- (void)loadImageWithImageManagerThumbnailURLs:imageURLs:watermark:config:;
- (void)loadImageWithImageViewThumbnailURLs:imageURLs:watermark:;
- (BOOL)hdImageLoaded;
- (void)p_setImgViewFrameAfterSetImg;
- (void)updateWatermarkLabelConstraints;
- (id)p_resizeImageSize:viewSize:;
- (id)p_alignPictureWithImgSize:;
- (void)setMaxZoomScalesForCurrentBounds;
- (void)setThumbnailURLs:imageURLs:;
- (void)setupScrollViewWithPreviewsScale:contentOffset:;
- (void)setWatermarkLabel:;
- (void)scrollViewDidEndZooming:withView:atScale:;
- (void)setScrollView:;
- (id)delegate;
- (id)thumbnailImage;
- (void)setLoadingView:;
- (id)initWithFrame:;
- (id)viewForZoomingInScrollView:;
- (id)loadingView;
- (void)scrollViewDidZoom:;
- (id)scrollView;
- (void)scrollViewDidEndDecelerating:;
- (void).cxx_destruct;
- (void)scrollViewWillBeginZooming:withView:;
- (void)setDelegate:;
- (void)layoutSubviews;
- (void)setImageView:;
- (id)imageView;
- (void)setThumbnailImage:;
- (double)previousScale;
- (void)setPreviousScale:;
@end
