@interface MTLBVHBoundingBoxGeometryDescriptor : MTLBVHGeometryDescriptor
@property (nonatomic) NSArray boundingBoxBuffers;
@property (nonatomic) Q boundingBoxStride;
- (void)dealloc;
- (unsigned long long)primitiveType;
- (id)boundingBoxBuffers;
- (void)setBoundingBoxBuffers:;
- (unsigned long long)boundingBoxStride;
- (void)setBoundingBoxStride:;
@end
