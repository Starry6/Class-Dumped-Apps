@interface CAMutableMeshTransform : CAMeshTransform
@property (nonatomic) NSString depthNormalization;
@property (nonatomic) NSInteger subdivisionSteps;
@property (nonatomic) BOOL replicatesEdges;
- (void)addVertex:;
- (id)init;
- (void)removeVertexAtIndex:;
- (void)setReplicatesEdges:;
- (id)depthNormalization;
- (int)subdivisionSteps;
- (void)addFace:;
- (void)replaceVertexAtIndex:withVertex:;
- (void)setSubdivisionSteps:;
- (void)removeFaceAtIndex:;
- (BOOL)replicatesEdges;
- (void)replaceFaceAtIndex:withFace:;
- (void)setDepthNormalization:;
- (id)copyWithZone:;
+ (id)meshTransform;
@end
