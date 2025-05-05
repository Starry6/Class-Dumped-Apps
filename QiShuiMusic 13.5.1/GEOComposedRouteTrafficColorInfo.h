@interface GEOComposedRouteTrafficColorInfo : NSObject
@property (nonatomic) Q color;
@property (nonatomic) double offsetMeters;
@property (nonatomic) {?=If} routeCoordinate;
- (void)setColor:;
- (id)initWithCoder:;
- (unsigned long long)color;
- (void)encodeWithCoder:;
- (id)description;
- (id)routeCoordinate;
- (double)offsetMeters;
- (void)setOffsetMeters:;
- (void)setRouteCoordinate:;
- (id)_stringForColor:;
+ (BOOL)supportsSecureCoding;
@end
