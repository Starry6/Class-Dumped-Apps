@interface MTKSubmesh : NSObject
@property (nonatomic) Q primitiveType;
@property (nonatomic) Q indexType;
@property (nonatomic) MTKMeshBuffer indexBuffer;
@property (nonatomic) Q indexCount;
@property (nonatomic) MTKMesh mesh;
@property (nonatomic) NSString name;
- (void)setName:;
- (unsigned long long)indexType;
- (void).cxx_destruct;
- (id)name;
- (unsigned long long)primitiveType;
- (id)indexBuffer;
- (unsigned long long)indexCount;
- (id)mesh;
- (id)initWithMesh:submesh:device:error:;
@end
