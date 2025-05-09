@interface ARRemoteService : NSObject
@property (nonatomic) <ARDaemonServiceBaseProtocol> syncService;
@property (nonatomic) <ARDaemonServiceBaseProtocol> service;
@property (nonatomic) Q status;
@property (nonatomic) <ARRemoteServiceAnchorDelegate> anchorDelegate;
@property (nonatomic) ARServerConnection connection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)initWithDaemon:;
- (void)_commonInit;
- (void)setStatus:;
- (int)clientProcessIdentifier;
- (void)setSyncService:;
- (id)init;
- (void)dealloc;
- (void)reconnect;
- (id)service;
- (void)_startService;
- (id)syncService;
- (id)initWithEndpoint:;
- (id)connection;
- (void).cxx_destruct;
- (id)clientProcessName;
- (void)setConnection:;
- (unsigned long long)status;
- (id)initWithQueue:;
- (void)invalidate;
- (id)anchorDelegate;
- (void)setAnchorDelegate:;
- (void)serverConnectionInterrupted:;
- (void)serverConnectionInvalidated:;
- (void)serviceConfiguredWithError:;
- (id)initWithEndpoint:startConnection:;
- (id)initWithMachServiceName:exportedInterface:remoteObjectInterface:;
- (id)initWithMachServiceName:exportedInterface:remoteObjectInterface:endpoint:;
- (id)initWithMachServiceName:exportedInterface:remoteObjectInterface:endpoint:startConnection:queue:;
- (void)connectionDispatchGroupLeave;
- (BOOL)_waitUntilStarted:;
- (BOOL)waitUntilStarted:;
- (void)syncServiceWithTimeout:callback:;
- (void)asyncServiceWithCallback:;
- (void)setService:syncService:;
- (void)serviceDidReconnect:;
- (void)serviceConfiguredWithCompletionHandler:;
- (id)initWithDaemon:startConnection:;
+ (BOOL)isSupported;
+ (id)serviceName;
+ (id)_runningServices;
+ (id)createRemoteServiceInterface:;
+ (id)createDaemonServiceInterface:;
+ (id)remoteServiceInterface;
+ (id)daemonServiceInterface;
+ (BOOL)isSupportedWithError:;
@end
