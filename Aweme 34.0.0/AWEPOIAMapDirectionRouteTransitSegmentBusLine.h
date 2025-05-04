@interface AWEPOIAMapDirectionRouteTransitSegmentBusLine : MTLModel
@property (nonatomic) AWEPOIAMapDirectionRouteTransitSegmentBusLineStop departureStop;
@property (nonatomic) AWEPOIAMapDirectionRouteTransitSegmentBusLineStop arrivalStop;
@property (nonatomic) NSString polyline;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)departureStop;
- (id)arrivalStop;
- (void)setDepartureStop:;
- (void)setArrivalStop:;
- (void).cxx_destruct;
- (id)polyline;
- (void)setPolyline:;
+ (BOOL)automaticallyDefaultMapping;
@end
