@interface IESForestExpiringObjectSet : NSObject
@property (nonatomic) NSMutableDictionary dict;
@property (nonatomic) NSTimer clearIntervalTimer;
@property (nonatomic) NSLock dictLock;
@property (nonatomic) double maxAge;
@property (nonatomic) double clearInterval;
- (void)clearExpiredCacheKey;
- (double)clearInterval;
- (id)clearIntervalTimer;
- (id)dictLock;
- (void)doClearExpiredCacheKey;
- (void)setClearInterval:;
- (void)setClearIntervalTimer:;
- (void)setDictLock:;
- (BOOL)updateObject:withExpiredDate:;
- (id)init;
- (void)dealloc;
- (BOOL)containsObject:;
- (double)maxAge;
- (void)setMaxAge:;
- (void).cxx_destruct;
- (id)dict;
- (void)setDict:;
- (BOOL)updateObject:;
@end
