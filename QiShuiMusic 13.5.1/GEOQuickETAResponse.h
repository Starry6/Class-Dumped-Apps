@interface GEOQuickETAResponse : NSObject
@property (nonatomic) GEOLocation sourceLocation;
@property (nonatomic) GEOLocation destinationLocation;
@property (nonatomic) I responseETASeconds;
@property (nonatomic) I baselineETASeconds;
@property (nonatomic) double distance;
@property (nonatomic) NSString routeDescription;
@property (nonatomic) GEOQuickETATransitDeparturesInfo transitDeparturesInfo;
@property (nonatomic) double distanceToDepartureStop;
@property (nonatomic) double walkingDurationToDepartureStop;
@property (nonatomic) NSMutableArray sortedETAs;
- (double)distance;
- (void).cxx_destruct;
- (id)destinationLocation;
- (id)routeDescription;
- (id)initWithETAResult:fromRequest:;
- (id)initWithDirectionsResponse:fromRequest:;
- (id)sourceLocation;
- (unsigned int)responseETASeconds;
- (unsigned int)baselineETASeconds;
- (id)transitDeparturesInfo;
- (double)distanceToDepartureStop;
- (double)walkingDurationToDepartureStop;
- (id)sortedETAs;
@end
