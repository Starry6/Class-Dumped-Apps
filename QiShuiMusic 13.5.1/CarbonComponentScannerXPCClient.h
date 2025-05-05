@interface CarbonComponentScannerXPCClient : NSObject
- (id)init;
- (id)xpcConnection;
- (void).cxx_destruct;
- (void)handleConnectionError:;
- (id)initialScan:;
- (void)rescan:added:removed:;
@end
