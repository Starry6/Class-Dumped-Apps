@interface AWEVideoDiskCacheDeleteManager : NSObject
@property (nonatomic) NSMutableSet shouldDeleteCacheSet;
@property (nonatomic) NSMutableSet usingCacheSet;
@property (nonatomic) NSTimer deleteTimer;
- (void)setDeleteTimer:;
- (id)deleteTimer;
- (void)setShouldDeleteCacheSet:;
- (void)setUsingCacheSet:;
- (id)shouldDeleteCacheSet;
- (id)usingCacheSet;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)usingCacheItems;
+ (void)_deleteCachesSafely;
+ (void)endUseCacheForKey:;
+ (void)shouldDeleteCacheForKey:;
+ (void)startUseCacheForKey:;
+ (id)sharedInstance;
@end
