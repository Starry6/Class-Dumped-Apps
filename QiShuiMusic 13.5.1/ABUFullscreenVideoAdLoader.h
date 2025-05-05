@interface ABUFullscreenVideoAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)fullscreenVideoAd:didLoadFailWithError:ext:;
- (void)fullscreenVideoAd:didLoadWithExt:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
