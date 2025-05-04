@interface AWENativeVideoReusePool : NSObject
@property (nonatomic) NSMutableArray videoPlayerCachePool;
@property (nonatomic) NSMutableArray showedPlayerRecords;
@property (nonatomic) q maxElementCount;
- (id)videoPlayerCachePool;
- (id)showedPlayerRecords;
- (id)findCanTakeBackElement;
- (id)addToReusePoolWith:;
- (id)dequeuePlayerWithContext:;
- (void)clearAllElement;
- (BOOL)hasCachedElement;
- (void)setVideoPlayerCachePool:;
- (void)setShowedPlayerRecords:;
- (void).cxx_destruct;
- (long long)maxElementCount;
- (void)setMaxElementCount:;
+ (id)sharedInstance;
@end
