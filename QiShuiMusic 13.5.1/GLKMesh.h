@interface GLKMesh : NSObject
@property (nonatomic) Q vertexCount;
@property (nonatomic) NSArray vertexBuffers;
@property (nonatomic) MDLVertexDescriptor vertexDescriptor;
@property (nonatomic) NSArray submeshes;
@property (nonatomic) NSString name;
- (id)vertexDescriptor;
- (unsigned long long)vertexCount;
- (void).cxx_destruct;
- (id)vertexBuffers;
- (id)name;
- (id)submeshes;
- (id)initWithMesh:error:;
+ (void)_createMeshesFromObject:newMeshes:sourceMeshes:error:;
+ (id)newMeshesFromAsset:sourceMeshes:error:;
@end
