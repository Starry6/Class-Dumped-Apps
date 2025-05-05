@interface ARMeshPrimitive : NSObject
@property (nonatomic) {?=[4]} transform_world_from_primitive;
@property (nonatomic) <MTLBuffer> vertexBuffer;
@property (nonatomic) <MTLBuffer> uvBuffer;
@property (nonatomic) Q nVertices;
@property (nonatomic) <MTLBuffer> indexBuffer;
@property (nonatomic) Q nIndices;
@property (nonatomic) <MTLTexture> texture;
- (id)texture;
- (void).cxx_destruct;
- (id)indexBuffer;
- (id)vertexBuffer;
- (id)initAsPlaneWithTransform:min:max:texture:;
- (id)transform_world_from_primitive;
- (id)uvBuffer;
- (unsigned long long)nVertices;
- (unsigned long long)nIndices;
+ (id)planeWithTransform:min:max:texture:;
@end
