@interface TSPKWebViewUtils : NSObject
@property (nonatomic) NSMutableArray mutableCacheURLArray;
@property (nonatomic) <TSPKLock> lock;
- (void)cacheURL:;
- (id)getCacheURLArray;
- (id)mutableCacheURLArray;
- (void)setMutableCacheURLArray:;
- (id)init;
- (id)lock;
- (void).cxx_destruct;
- (void)setLock:;
+ (id)sharedUtil;
@end
