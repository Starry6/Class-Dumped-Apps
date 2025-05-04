@interface AWENearbyTransformerPreloadManager : NSObject
@property (nonatomic) BOOL hasGrouponAlreadyStartedPreload;
@property (nonatomic) BOOL hasNearbyAlreadyStartedPreload;
@property (nonatomic) BOOL isPreloadSuccess;
- (void)prefechTransformerGeckoResourceIfNeed;
- (void)__trackWithPreloadResult:;
- (void)setIsPreloadSuccess:;
- (void)__preloadLynxViewWithScene:cardType:url:preloadResult:;
- (void)preloadTransformer;
- (BOOL)isPreloadSuccess;
- (void)__preloadTransformerResourceWithArr:lynxPreload:;
- (void)prefechGrouponTransformerGeckoResourceIfNeed;
- (void)prefechNearbyTransformerGeckoResourceIfNeed;
- (BOOL)hasGrouponAlreadyStartedPreload;
- (void)setHasGrouponAlreadyStartedPreload:;
- (BOOL)hasNearbyAlreadyStartedPreload;
- (void)setHasNearbyAlreadyStartedPreload:;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
