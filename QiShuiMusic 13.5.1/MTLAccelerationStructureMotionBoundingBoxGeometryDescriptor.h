@interface MTLAccelerationStructureMotionBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor
@property (nonatomic) NSArray boundingBoxBuffers;
@property (nonatomic) Q boundingBoxStride;
@property (nonatomic) Q boundingBoxCount;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)boundingBoxBuffers;
- (void)setBoundingBoxBuffers:;
- (unsigned long long)boundingBoxStride;
- (void)setBoundingBoxStride:;
- (unsigned long long)boundingBoxCount;
- (void)setBoundingBoxCount:;
+ (id)descriptor;
@end
