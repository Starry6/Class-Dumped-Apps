@interface ARMeshAnchor : ARAnchor
@property (nonatomic)  corner;
@property (nonatomic)  extent;
@property (nonatomic) double timestamp;
@property (nonatomic) double maxExtentError;
@property (nonatomic) {?=[4]} visionTransform;
@property (nonatomic) ARMeshGeometry geometry;
- (id)geometry;
- (id)extent;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)corner;
- (double)timestamp;
- (id)description;
- (id)initWithAnchor:;
- (id)tracingEntry;
- (id)visionTransform;
- (id)initWithGeometry:atTimestamp:identifier:referenceOriginTransform:;
- (id)initWithGeometry:atTimestamp:identifier:visionTransform:referenceOriginTransform:;
- (id)initWithGeometry:atTimestamp:identifier:;
- (id)initWithGeometry:atTimestamp:identifier:transform:;
- (id)initWithGeometry:atTimestamp:identifier:transform:voxelSize:;
- (double)maxExtentError;
- (void)setMaxExtentError:;
+ (BOOL)supportsSecureCoding;
@end
