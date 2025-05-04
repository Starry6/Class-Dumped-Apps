@interface AWEHPLandingLoginModule : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) BOOL hasSetup;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (BOOL)hasSetup;
- (void)setHasSetup:;
- (void)trySetup;
- (void)addNotificatons;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)lock;
- (void)setup;
- (void)removeNotifications;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
