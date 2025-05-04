@interface AWEBulletRouterService : NSObject
@property (nonatomic) @? beforeTransferBlock;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)createContainerViewController:;
- (void)openSchemaByHost:beforeOpenCompletion:afterOpenCompletion:;
- (void)openSchemaByHost:afterOpenCompletion:;
- (BOOL)openSchemaByHost:;
- (void)setBeforeTransferBlock:;
- (id)beforeTransferBlock;
- (void)routerDidCreateViewControllerBeforeTransferWithURLString:targetViewController:;
- (id)init;
- (void).cxx_destruct;
+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)commonProps;
+ (id)createService;
+ (id)createPopContainerViewControllerAndOpen:;
+ (id)bizGlobalPropsWithSchema:;
+ (id)tracertMonitorWithQueryItem:schema:;
+ (id)p_createContainerViewController:queryItems:;
+ (id)p_generateBDXContextWithQueryItems:urlString:;
+ (void)p_regeisterPerfixListWithQueryItems:;
+ (id)liteOfflinePrefix;
+ (unsigned long long)serviceType;
@end
