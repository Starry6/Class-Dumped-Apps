@interface AWEBackgroundImageCollectionViewCell : UICollectionViewCell
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIImageView imageViewForAdaptation;
@property (nonatomic) UIImageView pauseView;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isSmallPhone;
- (void)setImageViewForAdaptation:;
- (BOOL)isSmallPhone;
- (id)imageViewForAdaptation;
- (void)updateWithImageURL:;
- (void)setIsSmallPhone:;
- (BOOL)isFullScreen;
- (id)initWithFrame:;
- (void).cxx_destruct;
- (void)setImageView:;
- (id)imageView;
- (void)setIsFullScreen:;
- (id)pauseView;
- (void)setPauseView:;
@end
