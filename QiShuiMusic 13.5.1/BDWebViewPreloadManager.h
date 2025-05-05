@interface BDWebViewPreloadManager : NSObject
@property (nonatomic) YYCache yyCache;
@property (nonatomic) YYMemoryCache taskCaches;
@property (nonatomic) YYDiskCache diskCache;
- (id)yyCache;
- (void)clearDataForURLString:;
- (void)fetchDataForURLString:headerField:cacheDuration:queuePriority:completion:;
- (void)fetchDataForURLString:headerField:useHttpCaches:cacheDuration:queuePriority:chunkCompletion:dataCompletion:;
- (void)fetchDataForURLString:headerField:useHttpCaches:cacheDuration:queuePriority:completion:;
- (void)fetchDataForURLString:headerField:useHttpCaches:cacheDuration:queuePriority:dataCompletion:;
- (id)responseForURLString:;
- (void)saveResponse:forURLString:;
- (void)setTask:URLString:;
- (void)setTaskCaches:;
- (void)setYyCache:;
- (id)taskCaches;
- (id)taskForURLString:;
- (id)init;
- (id)diskCache;
- (void).cxx_destruct;
+ (id)MD5HashString:;
+ (id)sharedInstance;
@end
