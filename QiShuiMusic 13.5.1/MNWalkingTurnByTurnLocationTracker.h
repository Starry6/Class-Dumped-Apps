@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker
- (int)transportType;
- (id)initWithNavigationSession:;
- (id)_newMapMatcherForRoute:;
- (int)_detectedMotionForLocation:;
- (BOOL)_allowSwitchToTransportType:forLocation:;
@end
