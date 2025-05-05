@interface DNDRemoteAvailabilityServiceConnection : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (id)_queue_remoteTarget;
- (void)_queue_invalidateConnection;
- (void)_queue_createConnection;
- (void)getIsLocalUserAvailableWithRequestDetails:completionHandler:;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
