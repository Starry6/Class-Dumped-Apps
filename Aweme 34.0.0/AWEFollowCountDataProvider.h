@interface AWEFollowCountDataProvider : AWESocialRelationDataProvider
@property (nonatomic) AWEFollowCountResponse followCountMemoryCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)willStartSwitchAccountWithUser:;
- (id)readFromMemory:;
- (void)readFromFile:completion:;
- (void)updateMutualCacheAndNotifyObservers:;
- (void)localDataCenterDidUpdate:;
- (id)syncReadFromStorage;
- (void)updateCacheAndNotifyObservers:;
- (void)localUserCenterDidUpdate:;
- (void)followTablePrepared:;
- (id)followCountMemoryCache;
- (void)setFollowCountMemoryCache:;
- (id)init;
- (id)identifier;
- (void).cxx_destruct;
@end
