@interface ABUDrawAdLoader : ABUAdLoader
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isValidAdapter:mediaSlotConfig:;
- (void)drawAd:didLoadWithDrawAds:exts:;
- (void)drawAd:didLoadFailWithError:;
- (void)loadMediaAdWithAdapter:mediaSlotConfig:params:;
- (void)willLoadMediaAdUsingRules:withMediaSlotConfig:;
@end
