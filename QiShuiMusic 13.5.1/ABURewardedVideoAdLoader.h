@interface ABURewardedVideoAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)rewardedVideoAd:didLoadWithExt:;
- (void)fullscreenVideoAd:didLoadFailWithError:ext:;
- (void)fullscreenVideoAd:didLoadWithExt:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)rewardedVideoAd:didLoadFailWithError:ext:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
