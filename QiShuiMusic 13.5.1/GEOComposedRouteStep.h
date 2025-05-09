@interface GEOComposedRouteStep : NSObject
@property (nonatomic) BOOL shouldCreateEnterBoardGroup;
@property (nonatomic) BOOL shouldCreateAlightExitGroup;
@property (nonatomic) BOOL shouldCreateTransferGroup;
@property (nonatomic) BOOL shouldCreateTripProgressionGroup;
@property (nonatomic) BOOL shouldCreateFerryProgressionGroup;
@property (nonatomic) BOOL shouldCreateArrivalGroup;
@property (nonatomic) GEOComposedRoute composedRoute;
@property (nonatomic) GEOComposedRouteSegment segment;
@property (nonatomic) GEOComposedRouteStep previousStep;
@property (nonatomic) GEOComposedRouteStep nextStep;
@property (nonatomic) q routeSegmentType;
@property (nonatomic) NSInteger transportType;
@property (nonatomic) {?=If} startRouteCoordinate;
@property (nonatomic) {?=If} endRouteCoordinate;
@property (nonatomic) {?=If} maneuverStartRouteCoordinate;
@property (nonatomic) NSString maneuverRoadOrExitName;
@property (nonatomic) NSString maneuverRoadName;
@property (nonatomic) Q stepIndex;
@property (nonatomic) Q pathIndex;
@property (nonatomic) BOOL isStartOrResumeStep;
@property (nonatomic) BOOL isUncertainArrival;
@property (nonatomic) BOOL isArrivalStep;
@property (nonatomic) BOOL isChargingStop;
@property (nonatomic) {?=ddd} startGeoCoordinate;
@property (nonatomic) {?=ddd} endGeoCoordinate;
@property (nonatomic) GEOStep geoStep;
@property (nonatomic) NSInteger drivingSide;
@property (nonatomic) NSInteger maneuverType;
@property (nonatomic) GEOJunction junction;
@property (nonatomic) <GEOTransitArtworkDataSource> artworkOverride;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) I duration;
@property (nonatomic) I stepID;
@property (nonatomic) double distance;
@property (nonatomic) GEOComposedTransitTripRouteStep nextBoardingStep;
@property (nonatomic) GEOComposedTransitTripRouteStep previousBoardingStep;
@property (nonatomic) GEOComposedTransitTripRouteStep nextAlightingStep;
@property (nonatomic) GEOComposedTransitTripRouteStep previousAlightingStep;
@property (nonatomic) GEOComposedTransitTripRouteStep closestLogicalBoardOrAlightStep;
@property (nonatomic) GEOPBTransitStop startingStop;
@property (nonatomic) GEOPBTransitStop endingStop;
@property (nonatomic) I startTime;
@property (nonatomic) GEOPBTransitStop previousStop;
@property (nonatomic) GEOPBTransitStop nextStop;
@property (nonatomic) NSArray transitIncidents;
@property (nonatomic) NSArray advisories;
@property (nonatomic) GEOTransitStep transitStep;
@property (nonatomic) GEOInstructionSet instructions;
@property (nonatomic) NSArray steppingArtwork;
@property (nonatomic) NSArray routeDetailsPrimaryArtwork;
@property (nonatomic) <GEOTransitArtworkDataSource> routeDetailsSecondaryArtwork;
@property (nonatomic) GEOComposedRouteEVStepInfo evInfo;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)contentsForContext:;
- (double)distance;
- (double)travelTime;
- (BOOL)hasDuration;
- (int)transportType;
- (id)transitStep;
- (id)initWithCoder:;
- (unsigned int)startTime;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)segment;
- (id)description;
- (unsigned long long)pathIndex;
- (unsigned int)duration;
- (unsigned long long)stepIndex;
- (id)instructions;
- (id)initWithComposedRoute:geoRouteLeg:geoStep:routeSegmentType:stepIndex:startRouteCoordinate:endRouteCoordinate:maneuverStartRouteCoordinate:;
- (id)initWithComposedRoute:geoRouteLeg:geoStep:routeSegmentType:stepIndex:pointRange:maneuverPointRange:;
- (id)evInfo;
- (id)transitIncidents;
- (int)maneuverType;
- (unsigned int)pointCount;
- (id)endRouteCoordinate;
- (id)advisories;
- (BOOL)shouldPreloadWithHighPriority;
- (int)drivingSide;
- (id)artworkOverride;
- (unsigned int)stepID;
- (int)maneuver;
- (id)timeCheckpoints;
- (id)startRouteCoordinate;
- (id)initWithComposedRoute:routeSegmentType:stepIndex:pointRange:;
- (id)startGeoCoordinate;
- (id)endGeoCoordinate;
- (id)startingStop;
- (id)endingStop;
- (id)previousStop;
- (id)nextStop;
- (id)nextBoardingStep;
- (id)previousBoardingStep;
- (id)nextAlightingStep;
- (id)previousAlightingStep;
- (BOOL)isStartOrResumeStep;
- (BOOL)isArrivalStep;
- (id)routeDetailsPrimaryArtwork;
- (id)routeDetailsSecondaryArtwork;
- (id)steppingArtwork;
- (unsigned int)startPointIndex;
- (unsigned int)endPointIndex;
- (id)pointRange;
- (id)geoStep;
- (id)routeCoordinateRange;
- (id)composedRoute;
- (void)setComposedRoute:;
- (BOOL)shouldCreateEnterBoardGroup;
- (BOOL)shouldCreateAlightExitGroup;
- (BOOL)shouldCreateTransferGroup;
- (BOOL)shouldCreateTripProgressionGroup;
- (BOOL)shouldCreateFerryProgressionGroup;
- (BOOL)shouldCreateArrivalGroup;
- (BOOL)_belongsToTransferGroup;
- (id)junction;
- (id)maneuverPointRange;
- (unsigned int)maneuverStartPointIndex;
- (unsigned int)maneuverEndPointIndex;
- (id)maneuverRoadOrExitName;
- (id)maneuverRoadName;
- (BOOL)isUncertainArrival;
- (BOOL)isChargingStop;
- (id)getPreviousStep;
- (id)getNextStep;
- (id)closestLogicalBoardOrAlightStep;
- (id)firstNameOrBranch;
- (id)maneuverStartRouteCoordinate;
- (long long)routeSegmentType;
+ (BOOL)supportsSecureCoding;
@end
