@interface BDTTNetPrefetch : NSObject
@property (nonatomic) NSMutableDictionary taskMap;
@property (nonatomic) NSHashTable observers;
- (id)dequeuePrefetchTaskWithRequest:;
- (void)addPrefetchObserver:;
- (id)prefetchTaskWithPrefetchId:;
- (void)prefetchWithRequest:;
- (BOOL)containsRequest:;
- (id)init;
- (id)taskMap;
- (void).cxx_destruct;
- (void)setObservers:;
- (id)observers;
- (void)setTaskMap:;
+ (id)shared;
@end
