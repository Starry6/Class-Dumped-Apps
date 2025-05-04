@interface AWEProfileVideoPreloadHandler : NSObject
@property (nonatomic) NSMutableDictionary preloadedAwemeInfo;
@property (nonatomic) NSMutableDictionary clickedAwemeInfo;
@property (nonatomic) q scene;
@property (nonatomic) BOOL isFromHome;
- (long long)preloadSize;
- (void)preload:completion:;
- (void)tabBarDidChangeNotification:;
- (BOOL)enablePreloadVideo;
- (void)didEnterVideoDetailPage:;
- (void)setIsFromHome:;
- (id)videoPreloadConfig;
- (id)preloadedAwemeInfo;
- (BOOL)isFromHome;
- (void)trackPreloadEventIfNeed;
- (id)clickedAwemeInfo;
- (void)setPreloadedAwemeInfo:;
- (void)setClickedAwemeInfo:;
- (void)setScene:;
- (void)dealloc;
- (long long)scene;
- (id)group;
- (void).cxx_destruct;
@end
