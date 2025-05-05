@interface NetworkManager : NSObject
- (void)networkChanged:;
- (void)SetNetworkStatus:;
- (void)dealloc;
- (void)removeObserver;
- (void).cxx_destruct;
- (id)initWithCallback:;
- (id).cxx_construct;
- (void)initObserver;
@end
