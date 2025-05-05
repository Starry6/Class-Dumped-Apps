@interface MTLBVHGeometryDescriptor : NSObject
@property (nonatomic) Q primitiveType;
@property (nonatomic) Q primitiveCount;
@property (nonatomic) <MTLBuffer> maskBuffer;
@property (nonatomic) Q maskBufferOffset;
@property (nonatomic) <MTLBuffer> primitiveDataBuffer;
@property (nonatomic) Q primitiveDataBufferOffset;
@property (nonatomic) Q primitiveDataStride;
@property (nonatomic) Q primitiveDataElementSize;
- (void)dealloc;
- (unsigned long long)primitiveType;
- (unsigned long long)primitiveCount;
- (void)setPrimitiveCount:;
- (id)maskBuffer;
- (void)setMaskBuffer:;
- (unsigned long long)maskBufferOffset;
- (void)setMaskBufferOffset:;
- (id)primitiveDataBuffer;
- (void)setPrimitiveDataBuffer:;
- (unsigned long long)primitiveDataBufferOffset;
- (void)setPrimitiveDataBufferOffset:;
- (unsigned long long)primitiveDataStride;
- (void)setPrimitiveDataStride:;
- (unsigned long long)primitiveDataElementSize;
- (void)setPrimitiveDataElementSize:;
@end
