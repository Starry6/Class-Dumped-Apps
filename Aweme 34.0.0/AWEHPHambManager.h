@interface AWEHPHambManager : NSObject
@property (nonatomic) NSLock lock;
@property (nonatomic) NSString currentUserID;
@property (nonatomic) AWEHPHambSettingsManager settingsManager;
@property (nonatomic) AWEHPHambMessageManager messageManager;
@property (nonatomic) AWEHPHambListenerManager listenerManager;
@property (nonatomic) AWEHPHambCheckerManager checkerManager;
@property (nonatomic) AWEHPHambCache map;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)messageManager;
- (void)setCurrentUserID:;
- (void)p_reload;
- (void)p_insertMessages:error:;
- (void)p_safeTryReload;
- (id)listenerManager;
- (id)getSettingsDataHash;
- (id)checkerManager;
- (id)init;
- (void)dealloc;
- (void)setLock:;
- (id)settingsManager;
- (id)lock;
- (void)setup;
- (id)map;
- (void).cxx_destruct;
- (id)currentUserID;
+ (id)sharedInstance;
@end
