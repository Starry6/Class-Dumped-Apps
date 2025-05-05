@interface MX_NetworkObserver : NSObject
- (id)init;
- (void)dealloc;
- (void)networkPathUpdate:;
- (BOOL)isCarrierNetworkReachable;
@end
