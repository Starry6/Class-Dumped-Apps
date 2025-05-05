@interface ARSCNFaceGeometry : SCNGeometry
@property (nonatomic) <MTLBuffer> vertexBuffer;
@property (nonatomic) <MTLBuffer> normalBuffer;
@property (nonatomic) <MTLBuffer> textureBuffer;
- (void).cxx_destruct;
- (id)vertexBuffer;
- (void)setVertexBuffer:;
- (void)updateFromFaceGeometry:;
- (id)normalBuffer;
- (id)textureBuffer;
- (void)setNormalBuffer:;
- (void)setTextureBuffer:;
+ (id)faceGeometryWithDevice:fillMesh:;
+ (id)faceGeometryWithDevice:eyesFilled:mouthFilled:;
+ (id)faceGeometryWithDevice:;
@end
