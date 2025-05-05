@interface MNTraceNavigationUpdatesDepartWaypointRow : MNTraceNavigationUpdatesRow
@property (nonatomic) GEOComposedWaypoint waypoint;
@property (nonatomic) Q legIndex;
@property (nonatomic) Q reason;
- (unsigned long long)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (id)waypoint;
- (void)setWaypoint:;
- (unsigned long long)legIndex;
- (void)setLegIndex:;
- (long long)navigationUpdateType;
@end
