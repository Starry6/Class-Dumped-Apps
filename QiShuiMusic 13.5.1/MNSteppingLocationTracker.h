@interface MNSteppingLocationTracker : MNLocationTracker
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (int)transportType;
- (void)updateLocation:;
- (void).cxx_destruct;
- (void)stopTracking;
- (id)initWithNavigationSession:;
- (void)startTrackingWithInitialLocation:;
- (id)matchedLocationForLocation:;
- (id)_matchedLocationForLocation:;
- (void)resetForTracePlayerAtLocation:;
- (void)arrivalUpdaterDidArrive:atEndOfLegAtIndex:;
@end
