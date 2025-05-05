@interface ABUBannerAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)bannerAd:didLoad:ext:;
- (void)bannerAd:didLoadFailWithError:ext:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
