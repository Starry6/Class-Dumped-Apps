@interface AWEVideoDiskCacheDeleteManager : NSObject
@property (nonatomic) NSMutableSet shouldDeleteCacheSet;
@property (nonatomic) NSMutableSet usingCacheSet;
@property (nonatomic) NSTimer deleteTimer;
- (void)setShouldDeleteCacheSet:;
- (void)setUsingCacheSet:;
- (void)setDeleteTimer:;
- (id)deleteTimer;
- (id)usingCacheSet;
- (id)shouldDeleteCacheSet;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (void)shouldDeleteCacheForKey:;
+ (void)_deleteCachesSafely;
+ (id)usingCacheItems;
+ (void)startUseCacheForKey:;
+ (void)endUseCacheForKey:;
+ (id)sharedInstance;
@end
