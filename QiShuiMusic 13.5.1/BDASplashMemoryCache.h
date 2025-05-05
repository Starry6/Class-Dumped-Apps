@interface BDASplashMemoryCache : NSObject
@property (nonatomic) NSMutableDictionary searchWordsInfo;
@property (nonatomic) BOOL requestAbort;
@property (nonatomic) NSObject<OS_dispatch_queue> realtimeCacheQueue;
- (id)searchWordsInfo;
- (id)realtimeCacheQueue;
- (BOOL)requestAbort;
- (void)setRealtimeCacheQueue:;
- (void)setRequestAbort:;
- (void)setSearchWordsInfo:;
- (id)init;
- (id)initPrivate;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
