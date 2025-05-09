@interface GEORouteMatch : NSObject
@property (nonatomic) GEOComposedRoute route;
@property (nonatomic) {?=ddd} locationCoordinate3D;
@property (nonatomic) {?=dd} locationCoordinate;
@property (nonatomic) {PolylineCoordinate=If} routeCoordinate;
@property (nonatomic) Q stepIndex;
@property (nonatomic) GEOComposedRouteStep step;
@property (nonatomic) GEOComposedTransitTripRouteStep transitTripStep;
@property (nonatomic) GEOComposedTransitStationRouteStep transitStationStep;
@property (nonatomic) NSArray candidateSteps;
@property (nonatomic) Q segmentIndex;
@property (nonatomic) GEOComposedRouteSegment segment;
@property (nonatomic) Q legIndex;
@property (nonatomic) GEOComposedRouteLeg leg;
@property (nonatomic) double matchedCourse;
@property (nonatomic) double distanceFromRoute;
@property (nonatomic) GEOMatchedPathSegment pathSegment;
@property (nonatomic) GEOMapFeatureRoad road;
@property (nonatomic) double roadWidth;
@property (nonatomic) BOOL isOnParkingLotRoad;
@property (nonatomic) BOOL routeMatchedToEnd;
@property (nonatomic) GEORouteMatch projectedFrom;
@property (nonatomic) BOOL isTunnelProjection;
@property (nonatomic) BOOL isGoodMatch;
@property (nonatomic) BOOL shouldProjectLocationAlongRoute;
@property (nonatomic) Q consecutiveProgressionsOffRoute;
@property (nonatomic) double distanceTraveledOffRoute;
@property (nonatomic) double modifiedHorizontalAccuracy;
@property (nonatomic) double modifiedCourseAccuracy;
@property (nonatomic) NSDate timestamp;
@property (nonatomic) Q transitID;
@property (nonatomic) GEONavigationMatchInfo detailedMatchInfo;
- (void)setRoute:;
- (id)step;
- (id)route;
- (id)detailedMatchInfo;
- (id)initWithCoder:;
- (void)setDetailedMatchInfo:;
- (void)encodeWithCoder:;
- (void)setTimestamp:;
- (void).cxx_destruct;
- (unsigned long long)segmentIndex;
- (id)timestamp;
- (id)segment;
- (id)description;
- (double)roadWidth;
- (unsigned long long)stepIndex;
- (id).cxx_construct;
- (BOOL)isEqual:;
- (unsigned long long)transitID;
- (id)road;
- (id)routeCoordinate;
- (void)setStepIndex:;
- (unsigned long long)legIndex;
- (id)initWithComposedRoute:routeStatus:;
- (void)setRouteCoordinate:;
- (id)initWithRoute:routeCoordinate:locationCoordinate:stepIndex:matchedCourse:timestamp:;
- (id)locationCoordinate;
- (void)updateOffRouteProgress:minDistanceToGetOnRoute:;
- (BOOL)isEqualIgnoringScore:;
- (BOOL)routeMatchBehind:;
- (BOOL)routeMatchedToEnd;
- (BOOL)isOnParkingLotRoad;
- (id)transitTripStep;
- (id)transitStationStep;
- (id)leg;
- (id)locationCoordinate3D;
- (void)setLocationCoordinate3D:;
- (id)candidateSteps;
- (void)setCandidateSteps:;
- (double)matchedCourse;
- (void)setMatchedCourse:;
- (id)pathSegment;
- (void)setPathSegment:;
- (void)setRoadWidth:;
- (double)distanceFromRoute;
- (void)setDistanceFromRoute:;
- (double)modifiedHorizontalAccuracy;
- (void)setModifiedHorizontalAccuracy:;
- (double)modifiedCourseAccuracy;
- (void)setModifiedCourseAccuracy:;
- (id)projectedFrom;
- (void)setProjectedFrom:;
- (BOOL)isGoodMatch;
- (void)setIsGoodMatch:;
- (BOOL)shouldProjectLocationAlongRoute;
- (void)setShouldProjectLocationAlongRoute:;
- (unsigned long long)consecutiveProgressionsOffRoute;
- (void)setConsecutiveProgressionsOffRoute:;
- (double)distanceTraveledOffRoute;
- (void)setDistanceTraveledOffRoute:;
- (void)setTransitID:;
- (BOOL)isTunnelProjection;
- (void)setIsTunnelProjection:;
+ (BOOL)supportsSecureCoding;
@end
