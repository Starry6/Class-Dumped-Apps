@interface UIStatusBarPublisher : NSObject
- (void)dealloc;
- (void)removeStatusBarItem:;
- (void)addStatusBarItem:;
- (void).cxx_destruct;
- (unsigned long long)removeStyleOverrides:;
- (unsigned long long)addStyleOverrides:;
- (unsigned long long)styleOverrides;
- (id)initWithCFMachPort:;
- (unsigned int)publisherPort;
- (id)statusBarItems;
@end
