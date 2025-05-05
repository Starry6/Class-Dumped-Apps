@interface MNRealtimeTransitUpdate : MNRealtimeUpdate
@property (nonatomic) GEOTransitRouteUpdate transitUpdate;
- (id)routeID;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTransitRouteUpdate:;
- (id)transitUpdate;
+ (BOOL)supportsSecureCoding;
@end
