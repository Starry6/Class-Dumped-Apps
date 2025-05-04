@interface AWEOlderVerticalGuideViewController : UIViewController
@property (nonatomic) UILabel tipsLabel;
@property (nonatomic) LOTAnimationView guideLOTView;
@property (nonatomic) UIImageView highLightImgView;
- (id)tipsLabel;
- (void)setTipsLabel:;
- (void)__configSubviews;
- (void)showOlderVerticalGuideWithTips:forTargetView:targetViewCickHandler:complection:;
- (id)highLightImgView;
- (id)__createImageWithView:;
- (id)guideLOTView;
- (void)setHighLightImgView:;
- (void)__releaseGuideView;
- (void)setGuideLOTView:;
- (id)init;
- (void).cxx_destruct;
@end
