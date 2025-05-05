@interface MTKMesh : NSObject
@property (nonatomic) NSArray vertexBuffers;
@property (nonatomic) MDLVertexDescriptor vertexDescriptor;
@property (nonatomic) NSArray submeshes;
@property (nonatomic) Q vertexCount;
@property (nonatomic) NSString name;
- (void)setName:;
- (id)vertexDescriptor;
- (unsigned long long)vertexCount;
- (void).cxx_destruct;
- (id)vertexBuffers;
- (id)name;
- (id)submeshes;
- (id)initWithMesh:device:error:;
+ (void)_createMeshesFromObject:newMeshes:sourceMeshes:device:error:;
+ (id)newMeshesFromAsset:device:sourceMeshes:error:;
@end
