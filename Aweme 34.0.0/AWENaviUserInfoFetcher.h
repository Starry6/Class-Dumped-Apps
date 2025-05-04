@interface AWENaviUserInfoFetcher : NSObject
@property (nonatomic) NSLock fetchLock;
@property (nonatomic) NSLock getterSetterLock;
@property (nonatomic) NSMutableArray caches;
@property (nonatomic) NSArray mentions;
- (void)setCaches:;
- (BOOL)enableMemoryOptimizeWithNunki;
- (void)didReceiveMemeoryDangerLevelTopNotification;
- (void)handleMemoryWarning;
- (void)fetchUsers:completion:;
- (void)setFetchLock:;
- (void)setGetterSetterLock:;
- (id)getterSetterLock;
- (id)filterUsers:;
- (id)fetchLock;
- (void)fetchUser:completion:;
- (void)refreshUsers:;
- (void)dealloc;
- (id)caches;
- (void)prefetch;
- (void).cxx_destruct;
- (id)initWithMentions:;
- (id)mentions;
- (void)setMentions:;
@end
