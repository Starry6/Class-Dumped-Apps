@interface DRSubscriptionManager : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> accessQueue;
@property (nonatomic) NSMutableDictionary perTeamIdMonitors;
@property (nonatomic) NSMutableDictionary perTeamIdConfigState;
@property (nonatomic) NSMutableSet inFlightSubscriptionRequests;
- (id)accessQueue;
- (id)init;
- (void)_broadcastErrorForTeamID:error:;
- (void)_unsubscribeFromStreamWithTeamID:;
- (BOOL)_hasInitializedSubscriptionForTeamID:cachedConfigOut:errorOut:;
- (void)_completeSubscriptionRequestForTeamID:config:event:;
- (void)removeMonitor:;
- (id)inFlightSubscriptionRequests;
- (void)_requestSubscriptionToTeamIDStream:;
- (id)perTeamIdMonitors;
- (void).cxx_destruct;
- (id)_configFromEvent:teamIdOut:;
- (void)addMonitor:;
- (id)perTeamIdConfigState;
- (void)_processNewEvent:;
+ (id)sharedInstance;
@end
