@interface IESLiveGiftBannerView : UIView
@property (nonatomic) UIImageView backgroundImageView;
@property (nonatomic) UILabel descriptionLabel;
@property (nonatomic) UIImageView giftBannerImageView;
@property (nonatomic) IESLiveGiftBannerViewModel giftBannerViewModel;
@property (nonatomic) CAKeyframeAnimation giftBannerImageRotationAnimation;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)pr_loadsubViews;
- (void)didGiftBannerViewTaped:;
- (void)didSetAttachingDIContext;
- (id)giftBannerImageRotationAnimation;
- (id)giftBannerImageView;
- (id)giftBannerViewModel;
- (void)pr_bindViewModel;
- (void)setGiftBannerImageRotationAnimation:;
- (void)setGiftBannerImageView:;
- (void)setGiftBannerViewModel:;
- (void)shakeGiftBannerImageView;
- (id)backgroundImageView;
- (void)animationDidStop:finished:;
- (void)setDescriptionLabel:;
- (id)descriptionLabel;
- (void).cxx_destruct;
- (void)setBackgroundImageView:;
- (id)initWithFrame:viewModel:;
@end
