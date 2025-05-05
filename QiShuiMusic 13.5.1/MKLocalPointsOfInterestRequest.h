@interface MKLocalPointsOfInterestRequest : NSObject
@property (nonatomic) BOOL createdFromRegion;
@property (nonatomic) {CLLocationCoordinate2D=dd} coordinate;
@property (nonatomic) double radius;
@property (nonatomic) {?={CLLocationCoordinate2D=dd}{?=dd}} region;
@property (nonatomic) MKPointOfInterestFilter pointOfInterestFilter;
- (id)pointOfInterestFilter;
- (id)_clampedCoordinateRegionForCoordinateRegion:;
- (id)region;
- (double)radius;
- (void)setPointOfInterestFilter:;
- (void).cxx_destruct;
- (id)coordinate;
- (id)initWithCoordinateRegion:;
- (id)copyWithZone:;
- (id)initWithCenterCoordinate:radius:;
- (BOOL)_isValidCoordinateRegion:;
- (double)_deriveRadiusFromCoordinateRegion:;
- (BOOL)_createdFromRegion;
@end
