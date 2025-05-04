@interface AWEEcomSearchDataPrefetcher : HTSService
@property (nonatomic) NSMutableDictionary prefetchDict;
@property (nonatomic) NSObject<OS_dispatch_queue> preloadHelperQueue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)modelForKey:;
- (void)removeModelForKey:;
- (void)prefetchDataWithModel:;
- (id)prefetchDict;
- (void)setPrefetchDict:;
- (id)preloadHelperQueue;
- (void)setPreloadHelperQueue:;
- (id)init;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
