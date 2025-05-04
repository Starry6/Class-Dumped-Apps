@interface AWELiveFeedEffectResourceManager : NSObject
@property (nonatomic) TTHttpTask openCoinTask;
@property (nonatomic) NSMutableArray openCoinResourceRequests;
@property (nonatomic) NSString openCoinResourcePath;
- (id)openCoinTask;
- (id)openCoinResourcePath;
- (id)openCoinDownloadCache;
- (void)setOpenCoinResourcePath:;
- (id)openCoinResourceRequests;
- (void)unzipResource:toDestination:completion:;
- (void)setOpenCoinTask:;
- (void)downloadOpenCoinResource;
- (void)getOpenCoinEffectResourcePathCompletion:;
- (void)setOpenCoinResourceRequests:;
- (id)init;
- (void).cxx_destruct;
+ (id)defaultManager;
@end
