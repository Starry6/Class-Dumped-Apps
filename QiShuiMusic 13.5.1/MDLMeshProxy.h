@interface MDLMeshProxy : MDLMesh
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)initWithVertexBuffers:vertexCount:descriptor:submeshes:;
+ (BOOL)supportsSecureCoding;
@end
