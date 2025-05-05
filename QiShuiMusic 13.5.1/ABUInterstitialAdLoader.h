@interface ABUInterstitialAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)interstitialAd:didLoadFailWithError:ext:;
- (void)interstitialAd:didLoadWithExt:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
