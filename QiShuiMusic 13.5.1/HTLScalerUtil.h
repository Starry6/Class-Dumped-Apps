@interface HTLScalerUtil : NSObject
@property (nonatomic) <HTSKVStore> todayEntity;
@property (nonatomic) <HTSKVStore> versionEntity;
@property (nonatomic) <HTSKVStore> appEntity;
@property (nonatomic) <HTSKVStoreProvider> kvStoreProvider;
- (id)kvStoreProvider;
- (void)setTodayEntity:;
- (BOOL)neverShownInThisAppLifeWithKey:;
- (unsigned long long)countForEntity:withKey:defaultIncrease:;
- (void)setKvStoreProvider:;
- (void)setVersionEntity:;
- (unsigned long long)showTimesInAppWithKey:;
- (unsigned long long)showTimesInTodayWithKey:;
- (unsigned long long)timesInAppWithKey:;
- (unsigned long long)timesInTodayWithKey:;
- (id)todayEntity;
- (id)todayString;
- (id)versionEntity;
- (void)clear;
- (void).cxx_destruct;
- (id)appEntity;
- (void)setAppEntity:;
+ (id)defaultUtil;
@end
