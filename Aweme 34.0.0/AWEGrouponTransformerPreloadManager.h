@interface AWEGrouponTransformerPreloadManager : NSObject
@property (nonatomic) BOOL hasAlreadyStartedPreload;
@property (nonatomic) BOOL isPreloadSuccess;
- (void)prefechTransformerGeckoResourceIfNeed;
- (void)__preloadNearbyTransformerResourceWithArr:geckoPreload:lynxPreload:;
- (BOOL)hasAlreadyStartedPreload;
- (void)setHasAlreadyStartedPreload:;
- (void)__trackWithPreloadResult:;
- (void)setIsPreloadSuccess:;
- (void)__preloadLynxViewWithScene:cardType:url:preloadResult:;
- (void)preloadTransformer;
- (BOOL)isPreloadSuccess;
- (id)mutableCopyWithZone:;
- (id)copyWithZone:;
+ (id)sharedInstance;
+ (id)allocWithZone:;
@end
