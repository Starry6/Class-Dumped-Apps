@interface ICMusicSubscriptionLeaseController : NSObject
@property (nonatomic) NSString lastKnownHouseholdID;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)dealloc;
- (void)musicLeaseSession:requestsFairPlayKeyStatusUpdateWithCompletion:;
- (id)lastKnownHouseholdID;
- (void)getLastKnownHouseholdIDWithCompletion:;
- (void)_handlePlaybackLeaseDidEndPushNotification;
- (void).cxx_destruct;
- (void)musicLeaseSession:didFinishPlaybackRequest:withPlaybackResponse:responseError:updatedFairPlayKeyStatusList:completionHandler:;
- (void)environmentMonitorDidChangeNetworkReachability:;
- (id)_init;
- (void)receivedUserInteractionEvent;
- (void)getLeaseSessionWithRequestContext:completionHandler:;
+ (id)sharedController;
@end
