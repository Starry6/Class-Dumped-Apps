@interface AWEFriendCountDataProvider : AWESocialRelationDataProvider
@property (nonatomic) NSNumber friendCountMemoryCache;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogoutWithUid:;
- (void)willStartSwitchAccountWithUser:;
- (id)readFromMemory:;
- (void)readFromFile:completion:;
- (id)syncReadFromStorage;
- (void)updateCacheAndNotifyObservers:;
- (void)p_localUserCenterDidUpdate:;
- (id)friendCountMemoryCache;
- (void)setFriendCountMemoryCache:;
- (id)init;
- (void)dealloc;
- (id)identifier;
- (void).cxx_destruct;
@end
