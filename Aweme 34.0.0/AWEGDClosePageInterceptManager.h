@interface AWEGDClosePageInterceptManager : NSObject
@property (nonatomic) NSString sessionID;
@property (nonatomic) NSString handle;
@property (nonatomic) NSMutableArray controllerList;
- (void)setControllerList:;
- (void)initCloseInterceptLifeStorageWithSessionID;
- (id)getFirstInterceptor;
- (id)controllerList;
- (id)getDomainKeyBySession;
- (void)handleComponentListChange:;
- (void)addInterceptorControl:;
- (void)destroyCloseInterceptLifeStorage;
- (BOOL)shouldInterceptGDPageClose;
- (void)onGDPageClose;
- (void)setSessionID:;
- (void)dealloc;
- (void)setHandle:;
- (id)handle;
- (id)initWithSessionID:;
- (id)sessionID;
- (void).cxx_destruct;
@end
