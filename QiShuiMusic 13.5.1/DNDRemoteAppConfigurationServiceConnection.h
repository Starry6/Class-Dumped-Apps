@interface DNDRemoteAppConfigurationServiceConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_queue_remoteTarget;
- (void)getCurrentAppConfigurationForActionIdentifier:withRequestDetails:completionHandler:;
- (void)invalidateAppContextForActionIdentifier:withRequestDetails:completionHandler:;
- (void)_queue_invalidateConnection;
- (void)_queue_createConnection;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
