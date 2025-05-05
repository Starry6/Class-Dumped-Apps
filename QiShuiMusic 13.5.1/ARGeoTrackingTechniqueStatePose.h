@interface ARGeoTrackingTechniqueStatePose : NSObject
@property (nonatomic) double timestamp;
@property (nonatomic) {?=[4]} transform;
@property (nonatomic) BOOL fused;
@property (nonatomic) double heading;
- (double)heading;
- (id)transform;
- (double)timestamp;
- (id)initWithTimestamp:transform:fused:heading:;
- (BOOL)fused;
@end
