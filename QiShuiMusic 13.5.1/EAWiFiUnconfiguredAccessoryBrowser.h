@interface EAWiFiUnconfiguredAccessoryBrowser : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> delegateQueue;
@property (nonatomic) NSPredicate accessorySearchPredicate;
@property (nonatomic) <EAWiFiUnconfiguredAccessoryBrowserDelegate> delegate;
@property (nonatomic) NSSet unconfiguredAccessories;
- (id)initWithDelegate:queue:;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegateQueue;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegateQueue:;
- (void)_handleBrowserDidUpdateState:;
- (void)_handleNewAccessoriesNotification:;
- (void)_handleRemovedAccessoriesNotification:;
- (void)_handlePurgeAccessoriesSetNotification:;
- (void)stopSearchingForUnconfiguredAccessories;
- (void)_handleBrowserFinishedConfiguring:;
- (void)startSearchingForUnconfiguredAccessoriesMatchingPredicate:;
- (void)configureAccessory:withConfigurationUIOnViewController:;
- (id)unconfiguredAccessories;
- (id)accessorySearchPredicate;
- (void)setAccessorySearchPredicate:;
@end
