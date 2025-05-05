@interface TestPLClusterable : NSObject
@property (nonatomic) {CLLocationCoordinate2D=dd} pl_coordinate;
@property (nonatomic) double pl_gpsHorizontalAccuracy;
@property (nonatomic) NSDate pl_date;
@property (nonatomic) NSString pl_uuid;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)pl_coordinate;
- (void).cxx_destruct;
- (id)description;
- (double)pl_gpsHorizontalAccuracy;
- (id)pl_date;
- (id)pl_uuid;
- (id)initWithLatitude:longitude:time:;
+ (id)clusterableWithLatitude:longitude:time:;
@end
