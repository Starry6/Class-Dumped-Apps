@interface AWESearchUniversalComponentReusePool : NSObject
@property (nonatomic) AWESearchUniversalComponentReusePoolConfig config;
@property (nonatomic) NSMutableDictionary storage;
- (void)p_autoAdjustPoolCountLimit;
- (id)p_fetchStorageForIdentifier:;
- (long long)p_fetchCountLimitForIdentifier:;
- (unsigned long long)addToPool:withIdentifier:;
- (unsigned long long)removeFromPool:withIdentifier:;
- (id)fetchFromPoolWithIdentifier:;
- (BOOL)checkExistenceWithIdentifier:;
- (unsigned long long)countWithIdentifier:;
- (void)setConfig:;
- (void)setStorage:;
- (id)init;
- (id)storage;
- (void)updateWithConfig:;
- (id)config;
- (void)clear;
- (void).cxx_destruct;
@end
