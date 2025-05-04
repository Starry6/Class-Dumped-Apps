@interface AWEMateCountDataProvider : AWESocialRelationDataProvider
@property (nonatomic) NSNumber mateCountMemoryCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)interceptor_readFromFile:completion:;
- (id)interceptor_readFromMemory:;
- (void)didFinishLogoutWithUid:;
- (void)willStartSwitchAccountWithUser:;
- (id)readFromMemory:;
- (void)readFromFile:completion:;
- (void)localDataCenterDidUpdate:;
- (id)syncReadFromStorage;
- (void)updateCacheAndNotifyObservers:;
- (id)mateCountMemoryCache;
- (void)setMateCountMemoryCache:;
- (id)init;
- (void)dealloc;
- (id)identifier;
- (void).cxx_destruct;
@end
