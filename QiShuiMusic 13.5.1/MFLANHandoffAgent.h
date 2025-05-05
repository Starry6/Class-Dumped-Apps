@interface MFLANHandoffAgent : NSObject
@property (nonatomic) BOOL serverRunning;
@property (nonatomic) MFLANHandoffContext handoffContext;
- (id)init;
- (void)dealloc;
- (void)stopServer;
- (id)handoffContext;
- (void)_socketListenerRunLoop;
- (id)_getDeviceHostname;
- (void)_cleanupRunLoopSource;
- (void)_cleanupSocket;
- (id)startServerWithCompletion:;
- (void)connectToServerWithContext:completion:;
- (BOOL)serverRunning;
@end
