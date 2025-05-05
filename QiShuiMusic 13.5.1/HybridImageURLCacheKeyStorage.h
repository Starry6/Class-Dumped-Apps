@interface HybridImageURLCacheKeyStorage : NSObject
@property (nonatomic) NSMutableArray prefetchArray;
- (BOOL)consumePrefetchedCacheKey:;
- (id)prefetchArray;
- (void)setPrefetchArray:;
- (void)setPrefetchCacheKey:;
- (id)init;
- (void).cxx_destruct;
+ (void)setPrefetchCacheKey:;
+ (id)sharedInstance;
@end
