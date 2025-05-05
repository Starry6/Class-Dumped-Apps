@interface GTMeshData : NSObject
@property (nonatomic) ^{GTVertexData=} vertexData;
@property (nonatomic) Q vertexCount;
@property (nonatomic) NSDictionary submeshes;
- (unsigned long long)vertexCount;
- (void).cxx_destruct;
- (id)initWithURL:error:;
- (id).cxx_construct;
- (id)submeshes;
- (id)vertexData;
- (BOOL)parseMaterialFile:error:;
- (unsigned int)findIndexOrPushVertex:;
- (BOOL)readLine:error:;
- (BOOL)parseOBJFileWith:;
@end
