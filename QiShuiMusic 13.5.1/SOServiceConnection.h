@interface SOServiceConnection : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (BOOL)_connectToService;
- (void)getAuthorizationHintsWithURL:responseCode:completion:;
- (void)setXpcConnection:;
- (void)configurationWithCompletion:;
- (void)finishAuthorizationWithCompletion:;
- (void)beginAuthorizationWithRequestParameters:completion:;
- (void)debugHintsWithCompletion:;
- (id)xpcConnection;
- (void)isExtensionProcessWithAuditToken:completion:;
- (void).cxx_destruct;
- (id)_doConnectWithOptions:;
- (void)profilesWithExtensionBundleIdentifier:completion:;
- (void)setQueue:;
- (id)initWithQueue:;
- (void)cancelAuthorizationWithCompletion:;
- (void)performAuthorizationWithRequestParameters:completion:;
- (void)realmsWithCompletion:;
- (id)queue;
@end
