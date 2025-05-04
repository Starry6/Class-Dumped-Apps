@interface AWEMVChannelLandscapeInnerCacheManager : NSObject
@property (nonatomic) NSMutableArray landscapeAwemeCache;
@property (nonatomic) AWEMVChannelDataController landscapePreloadDataController;
@property (nonatomic) BOOL isLandscapePreloading;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)updateAwemeListWhenExitLandscape;
- (void)removeLandscapeAweme:;
- (id)awemeListForLandscape;
- (void)appendLandscapeAwemeList:;
- (void)removeLandscapeAll;
- (id)landscapeAwemeCache;
- (BOOL)isLandscapePreloading;
- (void)setIsLandscapePreloading:;
- (void)setLandscapePreloadDataController:;
- (id)landscapePreloadDataController;
- (void)preloadDataBeforeEnterLandscapeInflowIfNeededWithModel:context:;
- (void)setLandscapeAwemeCache:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
