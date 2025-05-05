@interface SCNGeometryDeformer : NSObject
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)instanciateForNode:withContext:computeVertexCount:;
+ (BOOL)supportsSecureCoding;
+ (BOOL)supportsDeformingNormals;
@end
