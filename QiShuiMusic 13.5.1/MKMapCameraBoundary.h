@interface MKMapCameraBoundary : NSObject
@property (nonatomic) BOOL _empty;
@property (nonatomic) {?={?=dd}{?=dd}} mapRect;
@property (nonatomic) {?={CLLocationCoordinate2D=dd}{?=dd}} region;
- (BOOL)_isEmpty;
- (id)init;
- (id)_clampedCoordinateRegionForCoordinateRegion:;
- (id)region;
- (id)initWithMapRect:;
- (id)initWithCoder:;
- (id)_clampedMapRectForMapRect:;
- (BOOL)isValidMapRect:;
- (BOOL)isValidCoordinateRegion:;
- (void)encodeWithCoder:;
- (id)_vkRegionRestriction;
- (void).cxx_destruct;
- (id)mapRect;
- (BOOL)_containsCoordinate:;
- (id)initWithCoordinateRegion:;
- (BOOL)isEqualToMapCameraBoundary:;
- (id)_clampedCoordinateForCoordinate:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
