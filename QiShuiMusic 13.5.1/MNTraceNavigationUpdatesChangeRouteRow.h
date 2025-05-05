@interface MNTraceNavigationUpdatesChangeRouteRow : MNTraceNavigationUpdatesRow
@property (nonatomic) NSData directionsResponseID;
@property (nonatomic) NSData etauResponseID;
@property (nonatomic) Q routeIndex;
@property (nonatomic) Q reason;
- (unsigned long long)reason;
- (void)setReason:;
- (void).cxx_destruct;
- (unsigned long long)routeIndex;
- (id)directionsResponseID;
- (id)etauResponseID;
- (void)setRouteIndex:;
- (void)setDirectionsResponseID:;
- (void)setEtauResponseID:;
- (long long)navigationUpdateType;
@end
