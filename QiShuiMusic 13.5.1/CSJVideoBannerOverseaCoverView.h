@interface CSJVideoBannerOverseaCoverView : CSJBannerOverseaCoverView
@property (nonatomic) UIImageView videoMaskImage;
@property (nonatomic) UIView videoBottomContentView;
- (void)pbu_fillData_videoMaskImage;
- (void)pbu_override_buildView;
- (void)pbu_override_buildViewData;
- (void)setVideoBottomContentView:;
- (void)setVideoMaskImage:;
- (id)videoBottomContentView;
- (id)videoMaskImage;
- (void).cxx_destruct;
@end
