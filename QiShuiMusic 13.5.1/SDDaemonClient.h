@interface SDDaemonClient : NSObject
@property (nonatomic) NSXPCConnection daemonConnection;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDaemonConnection:;
- (id)daemonConnection;
- (id)init;
- (void).cxx_destruct;
- (void)getCurrentDevice:;
- (void)enrollDevice:inProgram:completion:;
- (void)getDevicesForPlatforms:completion:;
- (void)queryProgramsForSystemAccountsWithPlatforms:completion:;
- (void)isDeviceEnrolledInBetaProgram:completion:;
- (void)unenrollDevice:completion:;
- (void)initializeDaemonConnection;
- (id)daemonRemoteObjectProxy;
+ (id)sharedInstance;
@end
