@interface UIStatusBarServerListener : NSObject
@property (nonatomic) NSArray allPublishers;
- (id)init;
- (void)_postStatusBarOverrideData:;
- (id)_publisherForPort:;
- (id)allPublishers;
- (void)_removeStyleOverrides:forPublisher:broadcasting:;
- (void)_addClient:;
- (void)_removeStatusBarItem:forPublisher:;
- (void)_addStatusBarItem:forPublisher:;
- (void).cxx_destruct;
- (unsigned long long)_styleOverrides;
- (BOOL)_permanentizeStatusBarOverrideData;
- (id)_statusBarOverrideData;
- (void)_removeClient:;
- (void)_removePublisher:;
- (void)_addStyleOverrides:forPublisher:broadcasting:;
- (void)_broadcastStyleOverrides;
- (void)async:;
+ (id)sharedInstance;
@end
