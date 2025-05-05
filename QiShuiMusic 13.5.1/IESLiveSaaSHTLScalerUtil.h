@interface IESLiveSaaSHTLScalerUtil : NSObject
@property (nonatomic) <IESLiveSaaSKVStore> todayEntity;
@property (nonatomic) <IESLiveSaaSKVStore> versionEntity;
@property (nonatomic) <IESLiveSaaSKVStore> appEntity;
@property (nonatomic) <IESLiveSaaSKVStoreProvider> kvStoreProvider;
- (id)kvStoreProvider;
- (void)setTodayEntity:;
- (BOOL)neverShownInThisAppLifeWithKey:;
- (unsigned long long)countForEntity:withKey:defaultIncrease:;
- (BOOL)neverShownInCurrentVersionWithKey:;
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
