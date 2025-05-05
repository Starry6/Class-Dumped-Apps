@interface ABUNativeAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)drawAd:didLoadWithDrawAds:exts:;
- (void)bannerAd:didLoad:ext:;
- (void)bannerAd:didLoadFailWithError:ext:;
- (void)drawAd:didLoadFailWithError:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)nativeAd:didLoadFailWithError:;
- (void)nativeAd:didLoadWithExpressViews:exts:;
- (void)nativeAd:didLoadWithNativeAds:exts:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
