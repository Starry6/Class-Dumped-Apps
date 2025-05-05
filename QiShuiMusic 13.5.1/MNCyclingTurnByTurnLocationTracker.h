@interface MNCyclingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)transportType;
- (void).cxx_destruct;
- (void)stopTracking;
- (id)initWithNavigationSession:;
- (BOOL)shouldProjectAlongRoute;
- (void)startTrackingWithInitialLocation:;
- (void)updateRequestForETAUpdate:;
- (void)updateForETAUResponse:;
- (id)_matchedLocationForLocation:;
- (void)_updateForReroute:rerouteReason:request:response:;
- (void)_updateForArrivalAtLegIndex:;
- (void)tunnelLocationProjector:didUpdateLocation:;
- (id)_newMapMatcherForRoute:;
- (id)_overrideLocationForLocation:;
- (void)_updateForLocation:;
- (int)_detectedMotionForLocation:;
- (BOOL)_allowSwitchToTransportType:forLocation:;
- (void)_updateForAlternateRoutes:;
- (id)userLocationForUpdateManager:;
@end
