@interface ABUInterstitialProAdLoader : ABUAdLoader
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)fullscreenVideoAd:didLoadFailWithError:ext:;
- (void)fullscreenVideoAd:didLoadWithExt:;
- (void)interstitialAd:didLoadFailWithError:ext:;
- (void)interstitialAd:didLoadWithExt:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
