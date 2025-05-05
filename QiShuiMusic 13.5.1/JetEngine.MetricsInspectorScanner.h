@interface JetEngine.MetricsInspectorScanner : NSObject
- (id)init;
- (void)dealloc;
- (void)netServiceBrowser:didFindService:moreComing:;
- (void)netServiceBrowser:didRemoveService:moreComing:;
- (void).cxx_destruct;
- (void)netServiceDidResolveAddress:;
- (void)netService:didNotResolve:;
- (void)netServiceBrowserWillSearch:;
- (void)netServiceBrowserDidStopSearch:;
@end
