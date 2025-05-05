@interface ARPlaneGeometry : NSObject
@property (nonatomic)  center;
@property (nonatomic)  extent;
@property (nonatomic) Q vertexCount;
@property (nonatomic) r^ vertices;
@property (nonatomic) Q textureCoordinateCount;
@property (nonatomic) r^ textureCoordinates;
@property (nonatomic) Q triangleCount;
@property (nonatomic) r^s triangleIndices;
@property (nonatomic) Q boundaryVertexCount;
@property (nonatomic) r^ boundaryVertices;
- (id)center;
- (id)extent;
- (unsigned long long)vertexCount;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)textureCoordinates;
- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned long long)triangleCount;
- (id)vertices;
- (unsigned long long)textureCoordinateCount;
- (id)triangleIndices;
- (id)initWithVertices:triangleIndices:boundaryVertexCount:center:extent:;
- (id)initWithBoundaryVertices:center:extent:;
- (id)boundaryVertices;
- (unsigned long long)boundaryVertexCount;
+ (BOOL)supportsSecureCoding;
@end
