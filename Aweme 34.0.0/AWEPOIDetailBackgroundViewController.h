@interface AWEPOIDetailBackgroundViewController : UIViewController
@property (nonatomic) UIImageView bgImageView;
@property (nonatomic) AWEGradientView maskBGView;
@property (nonatomic) UIColor maskBGViewStartColor;
@property (nonatomic) UIColor maskBGViewEndColor;
@property (nonatomic) AWEGradientView maskBGView2;
@property (nonatomic) UIColor maskBGView2StartColor;
@property (nonatomic) UIColor maskBGView2EndColor;
@property (nonatomic) UIView bgImageContainerView;
@property (nonatomic) double originBgImageContainerHeight;
@property (nonatomic) q backgroundOption;
@property (nonatomic) DitoPageContext context;
- (void)rx_store:didSetWithModule:;
- (void)hideMask;
- (id)poiDetail;
- (id)constData;
- (double)originBgImageContainerHeight;
- (void)setBgImageContainerView:;
- (id)bgImageContainerView;
- (void)setDefaultImageToImageView:size:fileName:;
- (id)maskBGView;
- (id)maskBGView2;
- (id)adjustImageSizeWithImage:size:;
- (id)maskBGViewStartColor;
- (id)maskBGViewEndColor;
- (id)maskBGView2StartColor;
- (id)maskBGView2EndColor;
- (void)layoutWithContent:;
- (void)p_registerSubscribe;
- (long long)backgroundOption;
- (void)setMaskBGViewStartColor:;
- (void)setMaskBGViewEndColor:;
- (void)setOriginBgImageContainerHeight:;
- (void)setBackgroundOption:;
- (void)setMaskBGView:;
- (void)setMaskBGView2:;
- (void)setMaskBGView2StartColor:;
- (void)setMaskBGView2EndColor:;
- (id)init;
- (id)store;
- (void)setContext:;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)context;
- (void)setBgImageView:;
- (id)bgImageView;
@end
