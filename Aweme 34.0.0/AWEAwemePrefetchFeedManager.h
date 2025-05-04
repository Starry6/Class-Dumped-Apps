@interface AWEAwemePrefetchFeedManager : NSObject
@property (nonatomic) AWEHotListDataController hotDataController;
@property (nonatomic) AWEAwemeResponseModel prefetchResponseModel;
@property (nonatomic) NSError error;
@property (nonatomic) Q prefetchState;
@property (nonatomic) BOOL hasPreFetch;
- (BOOL)enablePrefetch;
- (unsigned long long)prefetchState;
- (BOOL)hasPreFetch;
- (id)innerPrefetchConfig;
- (void)prefetchFeedReally;
- (void)setHotDataController:;
- (void)setPrefetchResponseModel:;
- (void)setPrefetchState:;
- (void)setHasPreFetch:;
- (id)hotDataController;
- (id)prefetchFeedConfig;
- (void)prefetchFeedIfNeeded;
- (id)prefetchResponseModel;
- (void)setError:;
- (void).cxx_destruct;
- (id)error;
- (void)reset;
+ (id)sharedInstance;
@end
