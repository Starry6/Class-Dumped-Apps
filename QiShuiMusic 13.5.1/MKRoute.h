@interface MKRoute : NSObject
@property (nonatomic) GEOComposedRoute geoComposedRoute;
@property (nonatomic) NSString name;
@property (nonatomic) NSArray advisoryNotices;
@property (nonatomic) double distance;
@property (nonatomic) double expectedTravelTime;
@property (nonatomic) Q transportType;
@property (nonatomic) MKPolyline polyline;
@property (nonatomic) NSArray steps;
@property (nonatomic) BOOL hasTolls;
@property (nonatomic) BOOL hasHighways;
- (id)steps;
- (double)distance;
- (unsigned long long)transportType;
- (void).cxx_destruct;
- (id)name;
- (id)advisoryNotices;
- (id)_initWithGEOComposedRoute:;
- (BOOL)hasTolls;
- (BOOL)hasHighways;
- (double)expectedTravelTime;
- (id)polyline;
- (id)_geoComposedRoute;
@end
