@interface GLKSubmesh : NSObject
@property (nonatomic) I type;
@property (nonatomic) I mode;
@property (nonatomic) NSInteger elementCount;
@property (nonatomic) GLKMeshBuffer elementBuffer;
@property (nonatomic) GLKMesh mesh;
@property (nonatomic) NSString name;
- (unsigned int)type;
- (void).cxx_destruct;
- (id)name;
- (unsigned int)mode;
- (id)elementBuffer;
- (id)mesh;
- (int)elementCount;
- (id)initWithMesh:submesh:error:;
@end
