@interface ICDeviceSetupStatusMonitor : NSObject
@property (nonatomic) BOOL setupAssistantComplete;
@property (nonatomic) BOOL deviceSetupComplete;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)performBlockAfterBuddySetup:;
- (void)dealloc;
- (BOOL)isDeviceSetupComplete;
- (void)setSetupAssistantComplete:;
- (void)nanoPairedDeviceStatusMonitor:didChangeClientSyncState:;
- (void).cxx_destruct;
- (id)_init;
- (void)_runAllPendingBlocksOfType:;
- (void)performBlockAfterDeviceSetup:;
- (BOOL)isSetupAssistantComplete;
+ (id)sharedMonitor;
@end
