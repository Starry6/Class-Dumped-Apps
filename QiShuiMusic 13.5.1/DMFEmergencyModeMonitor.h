@interface DMFEmergencyModeMonitor : NSObject
@property (nonatomic) NSXPCConnection xpcConnection;
- (id)init;
- (void)dealloc;
- (id)initWithXPCConnection:;
- (BOOL)enableEmergencyModeForDuration:withError:;
- (void)emergencyModeStatusWithCompletionHandler:;
- (id)xpcConnection;
- (void).cxx_destruct;
- (id)emergencyModeStatusWithError:;
- (BOOL)disableEmergencyModeWithError:;
- (BOOL)enableEmergencyModeWithError:;
+ (id)sharedMonitor;
+ (id)remoteInterface;
@end
