@interface MNTraceNavigationUpdateRecorder : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void).cxx_destruct;
- (void)navigationSession:didResumeNavigatingFromWaypoint:endOfLegIndex:reason:;
- (void)navigationSession:didReroute:withLocation:withAlternateRoutes:rerouteReason:;
- (void)navigationSession:didSwitchToNewTransportType:newRoute:;
- (id)initWithTraceRecorder:;
- (void)_recordRouteChangeWithRouteInfo:reason:;
@end
