@interface MTLAccelerationStructureBoundingBoxGeometryDescriptor : MTLAccelerationStructureGeometryDescriptor
@property (nonatomic) <MTLBuffer> boundingBoxBuffer;
@property (nonatomic) Q boundingBoxBufferOffset;
@property (nonatomic) Q boundingBoxStride;
@property (nonatomic) Q boundingBoxCount;
- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (unsigned long long)boundingBoxStride;
- (void)setBoundingBoxStride:;
- (id)boundingBoxBuffer;
- (void)setBoundingBoxBuffer:;
- (unsigned long long)boundingBoxBufferOffset;
- (void)setBoundingBoxBufferOffset:;
- (unsigned long long)boundingBoxCount;
- (void)setBoundingBoxCount:;
+ (id)descriptor;
@end
