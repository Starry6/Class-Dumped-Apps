@interface AMapRouteConfig : NSObject
@property (nonatomic) NSString appScheme;
@property (nonatomic) NSString appName;
@property (nonatomic) {CLLocationCoordinate2D=dd} startCoordinate;
@property (nonatomic) {CLLocationCoordinate2D=dd} destinationCoordinate;
@property (nonatomic) q drivingStrategy;
@property (nonatomic) q transitStrategy;
@property (nonatomic) q routeType;
- (long long)transitStrategy;
- (long long)drivingStrategy;
- (id)appScheme;
- (void)setAppScheme:;
- (void)setDestinationCoordinate:;
- (void)setDrivingStrategy:;
- (void)setTransitStrategy:;
- (void)setRouteType:;
- (long long)routeType;
- (void)setAppName:;
- (id)appName;
- (void).cxx_destruct;
- (id)description;
- (id)startCoordinate;
- (void)setStartCoordinate:;
- (id)destinationCoordinate;
@end
