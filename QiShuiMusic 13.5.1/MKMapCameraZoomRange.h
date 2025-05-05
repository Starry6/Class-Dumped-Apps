@interface MKMapCameraZoomRange : NSObject
@property (nonatomic) double minCenterCoordinateDistance;
@property (nonatomic) double maxCenterCoordinateDistance;
- (id)init;
- (double)minCenterCoordinateDistance;
- (double)maxCenterCoordinateDistance;
- (id)initWithCoder:;
- (id)initWithMaxCenterCoordinateDistance:;
- (id)initWithMinCenterCoordinateDistance:;
- (id)initWithMinCenterCoordinateDistance:maxCenterCoordinateDistance:;
- (void)encodeWithCoder:;
- (BOOL)isEqualToMapCameraZoomRange:;
- (BOOL)isEqual:;
- (id)copyWithZone:;
+ (BOOL)supportsSecureCoding;
@end
