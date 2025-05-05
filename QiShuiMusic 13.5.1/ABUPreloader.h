@interface ABUPreloader : NSObject
@property (nonatomic) ABUBaseAd adManager;
@property (nonatomic) ABUBaseAd<ABUPreloadSourceAd> sourceAdManager;
@property (nonatomic) q preloadType;
@property (nonatomic) ABUPreloadExtra extra;
- (void)setPreloadType:;
- (id)sourceAdManager;
- (id)adManager;
- (id)initWithAdManager:andType:;
- (void)loadAdWithConfig:andComplete:;
- (void)setAdManager:;
- (void)setExtra:;
- (void)setSourceAdManager:;
- (id)extra;
- (void).cxx_destruct;
- (long long)preloadType;
@end
