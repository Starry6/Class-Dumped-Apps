@interface DNDStateService : NSObject
@property (nonatomic) NSString clientIdentifier;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)removeStateUpdateListener:;
- (void)remoteService:didReceiveDoNotDisturbStateUpdate:;
- (BOOL)addStateUpdateListener:error:;
- (BOOL)removeStateUpdateListener:error:;
- (void)queryCurrentStateWithCompletionHandler:;
- (void)addStateUpdateListener:withCompletionHandler:;
- (id)_initWithClientIdentifier:;
- (BOOL)_queue_registerForStateUpdatesIfRequired;
- (void).cxx_destruct;
- (id)queryCurrentStateWithError:;
- (id)clientIdentifier;
+ (id)serviceForClientIdentifier:;
@end
