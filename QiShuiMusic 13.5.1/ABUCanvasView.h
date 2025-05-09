@interface ABUCanvasView : UIView
@property (nonatomic) BOOL hasSupportActionBtn;
@property (nonatomic) UILabel titleLabel;
@property (nonatomic) UILabel descLabel;
@property (nonatomic) UIImageView iconImageView;
@property (nonatomic) UIImageView imageView;
@property (nonatomic) UIButton callToActionBtn;
@property (nonatomic) UIView advertiserView;
@property (nonatomic) UIButton dislikeBtn;
@property (nonatomic) UIView adLogoView;
@property (nonatomic) UIView mediaView;
@property (nonatomic) UIView renderView;
@property (nonatomic) ABUMediatedNativeAd nativeAd;
@property (nonatomic) <ABUMediatedNativeAdData> data;
@property (nonatomic) <ABUCanvasViewCustomAdapter> adapter;
- (id)callToActionBtn;
- (id)_getViewFromCreatorWithSelector:;
- (id)adLogoView;
- (id)advertiserView;
- (id)descLabel;
- (id)dislikeBtn;
- (BOOL)hasSupportActionBtn;
- (id)initWithNativeAd:adapter:;
- (id)nativeAd;
- (void)registerClickableViews:;
- (void)setAdLogoView:;
- (void)setAdvertiserView:;
- (void)setDislikeBtn:;
- (void)setNativeAd:;
- (void)unregisterClickableViews;
- (void)setFrame:;
- (void)layoutSubviews;
- (id)data;
- (id)mediaView;
- (BOOL)isMemberOfClass:;
- (id)adapter;
- (BOOL)isKindOfClass:;
- (id)imageView;
- (void)setData:;
- (id)iconImageView;
- (id)titleLabel;
- (void)setIconImageView:;
- (void)setAdapter:;
- (BOOL)_hasMedia;
- (id)renderView;
- (void)setRenderView:;
@end
