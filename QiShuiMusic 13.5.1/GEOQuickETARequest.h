@interface GEOQuickETARequest : NSObject
@property (nonatomic) NSString requestingAppIdentifier;
@property (nonatomic) GEOComposedWaypoint sourceWaypoint;
@property (nonatomic) GEOComposedWaypoint destinationWaypoint;
@property (nonatomic) NSDate departureDate;
@property (nonatomic) NSDate arrivalDate;
@property (nonatomic) NSInteger transportType;
@property (nonatomic) GEOLocation currentLocation;
@property (nonatomic) BOOL includeDistance;
@property (nonatomic) GEOAutomobileOptions automobileOptions;
@property (nonatomic) GEOCyclingOptions cyclingOptions;
@property (nonatomic) GEOTransitOptions transitOptions;
@property (nonatomic) GEOWalkingOptions walkingOptions;
@property (nonatomic) NSArray additionalTransportTypesRequested;
- (id)initWithDirectionsRequest:origin:destination:automobileOptions:;
- (id)automobileOptions;
- (id)arrivalDate;
- (id)transitOptions;
- (id)departureDate;
- (id)currentLocation;
- (int)transportType;
- (void).cxx_destruct;
- (id)description;
- (id)walkingOptions;
- (id)cyclingOptions;
- (id)requestingAppIdentifier;
- (void)setRequestingAppIdentifier:;
- (id)initWithSource:toDestination:departureDate:transportType:currentLocation:;
- (id)initWithSource:toDestination:departureDate:transportType:currentLocation:includeDistance:;
- (id)initWithSource:toDestination:arrivalDate:transportType:currentLocation:;
- (id)initWithSource:toDestination:arrivalDate:transportType:currentLocation:includeDistance:;
- (id)initWithSource:toDestination:departureDate:currentLocation:includeDistance:automobileOptions:transitOptions:walkingOptions:cyclingOptions:;
- (id)initWithSource:toDestination:arrivalDate:currentLocation:includeDistance:automobileOptions:transitOptions:walkingOptions:cyclingOptions:;
- (id)initWithSource:toDestination:departureDate:transportType:currentLocation:includeDistance:additionalTransportTypesRequested:;
- (id)initWithSource:toDestination:arrivalDate:transportType:currentLocation:includeDistance:additionalTransportTypesRequested:;
- (id)initWithSource:toDestination:departureDate:transportType:currentLocation:includeDistance:additionalTransportTypesRequested:automobileOptions:transitOptions:walkingOptions:cyclingOptions:;
- (id)initWithSource:toDestination:arrivalDate:transportType:currentLocation:includeDistance:additionalTransportTypesRequested:automobileOptions:transitOptions:walkingOptions:cyclingOptions:;
- (id)_defaultRequestingAppIdentifier;
- (id)sourceWaypoint;
- (id)destinationWaypoint;
- (BOOL)includeDistance;
- (id)additionalTransportTypesRequested;
@end
