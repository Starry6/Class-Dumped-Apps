@interface IDSRateLimiter : NSObject
@property (nonatomic) q limit;
@property (nonatomic) double timeLimit;
@property (nonatomic) NSMutableDictionary cacheMap;
@property (nonatomic) {os_unfair_lock_s=I} lock;
- (long long)limit;
- (BOOL)underLimitForItem:;
- (void)cleanupExpiredItems;
- (id)initWithLimit:timeLimit:;
- (void)setLimit:;
- (id)_unlockedDescription;
- (id)lock;
- (void)setCacheMap:;
- (double)timeToUnderLimit:;
- (void)noteItem:;
- (void).cxx_destruct;
- (void)setTimeLimit:;
- (void)clearAllItems;
- (id)description;
- (void)clearItem:;
- (id)cacheMap;
- (double)timeLimit;
- (void)setLock:;
@end
