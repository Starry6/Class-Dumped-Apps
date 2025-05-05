@interface BDXPrefetchStorage : NSObject
@property (nonatomic) MMKV mmkv;
- (id)mmkv;
- (id)prefetchResultForKey:;
- (id)quickPrefetchResultsForKeys:;
- (void)setMmkv:;
- (void)setPrefetchResult:;
- (id)init;
- (void)dealloc;
- (void)didReceiveMemoryWarning:;
- (void).cxx_destruct;
- (void)removeObjectForKey:;
@end
