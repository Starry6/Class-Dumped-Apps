@interface GEONavigationMatchResult : NSObject
@property (nonatomic) Q type;
@property (nonatomic) GEORouteMatch routeMatch;
@property (nonatomic) GEORoadMatch roadMatch;
@property (nonatomic) GEOLocation rawLocation;
@property (nonatomic) GEONavigationMatchInfo detailedMatchInfo;
@property (nonatomic) BOOL locationUnreliable;
- (id)detailedMatchInfo;
- (id)routeMatch;
- (id)roadMatch;
- (void)setDetailedMatchInfo:;
- (void)setLocationUnreliable:;
- (void)setRouteMatch:;
- (unsigned long long)type;
- (BOOL)locationUnreliable;
- (void).cxx_destruct;
- (id)rawLocation;
- (id)initWithRawLocation:;
- (id)initWithRouteMatch:location:;
- (id)initWithRoadMatch:location:;
+ (id)matchResultWithRouteMatch:location:;
+ (id)matchResultWithRoadMatch:location:;
+ (id)matchResultWithRawLocation:;
@end
