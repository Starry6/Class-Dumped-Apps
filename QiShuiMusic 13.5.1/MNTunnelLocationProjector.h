@interface MNTunnelLocationProjector : NSObject
@property (nonatomic) <MNTunnelLocationProjectorDelegate> delegate;
@property (nonatomic) BOOL isProjecting;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (void)stop;
- (void)updateLocation:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_locationUpdateOverdueTimerFired:;
- (void)updateForRouteInfo:;
- (id)_tunnelRangeForRouteCoordinate:;
- (id)_tunnelRanges;
- (void)_resetTimerWithTimeout:;
- (id)_projectedLocationFrom:timeInterval:tunnelRange:;
- (id)_projectedRouteCoordinateFrom:timeInterval:tunnelRange:;
- (BOOL)isProjecting;
@end
