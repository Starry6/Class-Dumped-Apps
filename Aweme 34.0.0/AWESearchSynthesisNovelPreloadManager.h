@interface AWESearchSynthesisNovelPreloadManager : NSObject
@property (nonatomic) BOOL isPreloading;
@property (nonatomic) NSMutableArray preloadUrlsQueue;
@property (nonatomic) UIView<BDXKitViewProtocol> preloadView;
@property (nonatomic) NSTimer preloadTimer;
@property (nonatomic) NSMutableDictionary preloadDataDict;
- (void)setIsPreloading:;
- (void)setPreloadTimer:;
- (id)preloadTimer;
- (id)preloadView;
- (void)setPreloadView:;
- (id)preloadUrlsQueue;
- (BOOL)hasPreloadedUrl:;
- (void)savePreTranscodeData:type:url:transcodeExtra:;
- (void)preloadNextUrl;
- (void)preloadWithUrl:;
- (id)getPreTranscodeDataWithUrl:;
- (id)preloadDataDict;
- (void)setPreloadDataDict:;
- (void)cancelPreloadUrl:;
- (void)setPreloadUrlsQueue:;
- (void).cxx_destruct;
- (BOOL)isPreloading;
+ (BOOL)openNovelPreloadOptimize;
+ (id)sharedManager;
@end
