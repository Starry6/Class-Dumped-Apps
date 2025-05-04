@interface AWECloudAlbumImagePreviewCell : AWECloudAlbumPreviewCell
@property (nonatomic) BOOL tracking;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setupZoomScrollView;
- (void)resetCell;
- (void)configWithModel:playFrame:;
- (BOOL)isTracking;
- (void)prepareForReuse;
- (id)initWithFrame:;
- (id)viewForZoomingInScrollView:;
- (void)scrollViewDidZoom:;
- (void)handleDoubleTap:;
- (void).cxx_destruct;
- (void)setImageView:;
- (void)setTracking:;
- (id)imageView;
- (void)setupUI;
@end
