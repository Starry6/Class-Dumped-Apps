@interface DNDMeDeviceService : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeListener:;
- (void)queryCurrentStateWithCompletionHandler:;
- (id)_initWithClientIdentifier:;
- (BOOL)_queue_registerForStateUpdatesIfRequired;
- (void).cxx_destruct;
- (id)clientIdentifier;
- (void)addListener:withCompletionHandler:;
- (void)remoteService:didReceiveUpdatedMeDeviceState:;
+ (id)serviceForClientIdentifier:;
@end
