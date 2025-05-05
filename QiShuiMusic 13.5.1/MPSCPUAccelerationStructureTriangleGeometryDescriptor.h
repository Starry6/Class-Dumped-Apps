@interface MPSCPUAccelerationStructureTriangleGeometryDescriptor : MPSCPUAccelerationStructureGeometryDescriptor
@property (nonatomic) ^v vertexData;
@property (nonatomic) Q vertexStride;
@property (nonatomic) ^v indexData;
@property (nonatomic) I indexDataType;
@property (nonatomic) Q triangleCount;
- (id)init;
- (unsigned long long)vertexStride;
- (void)setVertexStride:;
- (unsigned long long)triangleCount;
- (void)setTriangleCount:;
- (id)indexData;
- (id)vertexData;
- (void)setVertexData:;
- (void)setIndexData:;
- (void)setIndexDataType:;
- (unsigned int)indexDataType;
@end
