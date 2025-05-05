@interface VSAccountMonitor : NSObject
@property (nonatomic) ACMonitoredAccountStore monitoredAccountStore;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)accountWasAdded:;
- (id)init;
- (id)monitoredAccountStore;
- (void)setMonitoredAccountStore:;
- (void)accountWasModified:;
- (void)accountWasRemoved:;
- (void).cxx_destruct;
- (void)accountCredentialChanged:;
- (void)_sendNotification;
+ (id)sharedInstance;
@end
