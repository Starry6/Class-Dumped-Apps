@interface MPSPolygonBuffer : NSObject
@property (nonatomic) <MTLBuffer> vertexBuffer;
@property (nonatomic) Q vertexBufferOffset;
@property (nonatomic) <MTLBuffer> indexBuffer;
@property (nonatomic) Q indexBufferOffset;
@property (nonatomic) <MTLBuffer> maskBuffer;
@property (nonatomic) Q maskBufferOffset;
@property (nonatomic) Q polygonCount;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)description;
- (id)copyWithZone:;
- (id)maskBuffer;
- (void)setMaskBuffer:;
- (unsigned long long)maskBufferOffset;
- (void)setMaskBufferOffset:;
- (id)indexBuffer;
- (void)setIndexBuffer:;
- (unsigned long long)indexBufferOffset;
- (void)setIndexBufferOffset:;
- (id)vertexBuffer;
- (void)setVertexBuffer:;
- (unsigned long long)vertexBufferOffset;
- (void)setVertexBufferOffset:;
- (unsigned long long)polygonCount;
- (void)setPolygonCount:;
- (void)validateWithVerticesPerPolygon:vertexStride:indexStride:;
+ (BOOL)supportsSecureCoding;
+ (id)polygonBuffer;
@end
