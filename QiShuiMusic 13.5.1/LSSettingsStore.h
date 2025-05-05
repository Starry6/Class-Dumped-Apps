@interface LSSettingsStore : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> observerQueue;
@property (nonatomic) NSMutableSet observerSet;
- (void)removeChangeObserver:;
- (unsigned char)userElectionForExtensionKey:;
- (id)settingsStoreConfigurationForProcessWithAuditToken:;
- (id)observerSet;
- (id)observerQueue;
- (void).cxx_destruct;
- (BOOL)setUserElection:forExtensionKey:error:;
- (id)_init;
- (id)addChangeObserver:;
+ (id)sharedInstance;
@end
