@interface MKAllRouteETAsManager : NSObject
@property (nonatomic) <MKAllRouteETAsManagerDelegate> delegate;
@property (nonatomic) GEOAutomobileOptions automobileOptions;
@property (nonatomic) GEOWalkingOptions walkingOptions;
@property (nonatomic) GEOTransitOptions transitOptions;
@property (nonatomic) GEOCyclingOptions cyclingOptions;
@property (nonatomic) MKMapItem mapItem;
@property (nonatomic) MKMapItem originMapItem;
- (id)mapItem;
- (void)setAutomobileOptions:;
- (id)automobileOptions;
- (id)init;
- (id)transitOptions;
- (void)setDelegate:;
- (void)setMapItem:;
- (id)delegate;
- (void)setTransitOptions:;
- (void).cxx_destruct;
- (void)setCyclingOptions:;
- (void)setWalkingOptions:;
- (id)walkingOptions;
- (id)cyclingOptions;
- (void)setOriginMapItem:;
- (id)routeETAForTransportType:;
- (id)originMapItem;
- (void)updateETA;
@end
