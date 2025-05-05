@interface GEOCoordinateArraySupportPoint : NSObject
@property (nonatomic) {PolylineCoordinate=If} routeCoordinate;
@property (nonatomic) Q index;
@property (nonatomic) q roadID;
@property (nonatomic) double heading;
@property (nonatomic) BOOL isUTurn;
@property (nonatomic) NSInteger legacyRoadClass;
@property (nonatomic) NSInteger legacyFormOfWay;
- (id)init;
- (double)heading;
- (void)setHeading:;
- (id)initWithCoder:;
- (unsigned long long)index;
- (void)encodeWithCoder:;
- (void)setIndex:;
- (id)description;
- (id).cxx_construct;
- (long long)roadID;
- (id)routeCoordinate;
- (void)setRouteCoordinate:;
- (void)setRoadID:;
- (BOOL)isUTurn;
- (void)setIsUTurn:;
- (int)legacyRoadClass;
- (void)setLegacyRoadClass:;
- (int)legacyFormOfWay;
- (void)setLegacyFormOfWay:;
+ (BOOL)supportsSecureCoding;
@end
