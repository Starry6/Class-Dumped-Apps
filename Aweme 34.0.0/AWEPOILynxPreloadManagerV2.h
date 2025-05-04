@interface AWEPOILynxPreloadManagerV2 : NSObject
@property (nonatomic) NSMutableDictionary preloadingViewDict;
@property (nonatomic) NSMutableDictionary readyViewDict;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)cubeView:viewDidChangeContentSize:;
- (void)cubeView:didFinishLoadWithURL:;
- (void)cubeView:didReceiveError:;
- (void)preloadViewForCubeModel:lynxClass:uniqueTag:;
- (void)preloadViewForCubeModel:lynxClass:;
- (void)removePreloadViewForURL:;
- (id)viewForURL:preloadID:;
- (void)updatePreLoadCacheWithCubeModel:;
- (id)preloadKey:;
- (id)readyViewDict;
- (BOOL)shouldEnablePreloadForChannel:bundle:lynxVersion:;
- (id)preloadingViewDict;
- (unsigned long long)packageVersionForChannel:;
- (void)setPreloadingViewDict:;
- (void)setReadyViewDict:;
- (id)init;
- (void).cxx_destruct;
+ (id)preloadConfigsForPage:bizCode:poiBackendType:;
+ (id)sharedInstance;
@end
