@interface SDDaemon : NSObject
@property (nonatomic) NSXPCListener listener;
@property (nonatomic) NSMutableDictionary appConnections;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)start;
- (void)_releaseAppConnectionWithPid:;
- (id)listener;
- (id)appConnections;
- (void)_storeAppConnection:;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (void)setListener:;
- (void)checkIn;
- (id)_connectionForPid:;
- (void)setAppConnections:;
- (void)getCurrentDevice:;
- (void)enrollDevice:inProgram:completion:;
- (void)getDevicesForPlatforms:completion:;
- (void)queryProgramsForSystemAccountsWithPlatforms:completion:;
- (void)isDeviceEnrolledInBetaProgram:completion:;
- (void)unenrollDevice:completion:;
- (id)remoteObjectProxyForPID:;
- (void)_verifyCurrentDevice;
+ (id)sharedInstance;
@end
