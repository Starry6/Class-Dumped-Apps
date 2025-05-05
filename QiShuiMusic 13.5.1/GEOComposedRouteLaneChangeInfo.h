@interface GEOComposedRouteLaneChangeInfo : NSObject
@property (nonatomic) Q laneCount;
@property (nonatomic) {GEOPolylineCoordinateRange={?=If}{?=If}} routeCoordinateRange;
@property (nonatomic) {?=ddd} startCoordinate;
@property (nonatomic) {?=ddd} endCoordinate;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (unsigned long long)laneCount;
- (id)routeCoordinateRange;
- (id)startCoordinate;
- (id)endCoordinate;
- (id)initWithGeoLaneChangeInfo:coordinates:;
+ (BOOL)supportsSecureCoding;
@end
