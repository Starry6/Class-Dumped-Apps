@interface ABUSplashAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)splashAd:didLoadFailWithError:ext:;
- (void)splashAd:didLoadWithExt:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
