@interface AWEBulletKitModuleService : HTSService
@property (nonatomic) NSMutableDictionary preConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)onServiceInit;
- (void)didFinishLogin;
- (void)didFinishLogoutWithUid:;
- (id)preConfig;
- (void)setPreConfig:;
- (void)preloadWithSchema:;
- (void)prefetchWithSchema:;
- (void)setAdInfo:WithLynxView:;
- (id)adInfoWithLynxView:;
- (id)containerBuilder;
- (id)annieXPreserveDataManager;
- (void)triggerPreOptimizeWithStrategy:schema:;
- (BOOL)enableNewPrefetchWithSchema:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
+ (id)additionalRequestHeaderFields;
+ (void)bulletSetup;
+ (void)setupRouter;
+ (void)registerOldBridge;
+ (void)setupGlobalContext:;
+ (void)setupXpoolConfig;
+ (void)setupLynxResourceProvider;
+ (void)themeDidChange:;
+ (void)_aweLazyRegisterLoad;
+ (void)setupSetting;
@end
