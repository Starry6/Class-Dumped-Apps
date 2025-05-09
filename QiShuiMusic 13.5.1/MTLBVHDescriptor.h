@interface MTLBVHDescriptor : NSObject
@property (nonatomic) Q maxDepth;
@property (nonatomic) Q branchingFactor;
@property (nonatomic) Q minPrimitivesPerLeaf;
@property (nonatomic) Q maxPrimitivesPerLeaf;
@property (nonatomic) float traversalCost;
@property (nonatomic) float primitiveCost;
@property (nonatomic) Q splitHeuristic;
@property (nonatomic) float splitCapacity;
@property (nonatomic) float minOverlap;
@property (nonatomic) float motionTraversalCost;
@property (nonatomic) BOOL motion;
@property (nonatomic) Q primitiveKeyframeCount;
@property (nonatomic) float primitiveMotionStartTime;
@property (nonatomic) float primitiveMotionEndTime;
@property (nonatomic) NSArray geometryDescriptors;
- (id)init;
- (void)dealloc;
- (void)setMotion:;
- (unsigned long long)maxDepth;
- (BOOL)motion;
- (BOOL)primitiveMotion;
- (void)setMaxDepth:;
- (unsigned long long)branchingFactor;
- (void)setBranchingFactor:;
- (unsigned long long)minPrimitivesPerLeaf;
- (void)setMinPrimitivesPerLeaf:;
- (unsigned long long)maxPrimitivesPerLeaf;
- (void)setMaxPrimitivesPerLeaf:;
- (float)primitiveCost;
- (void)setPrimitiveCost:;
- (float)traversalCost;
- (void)setTraversalCost:;
- (id)geometryDescriptors;
- (void)setGeometryDescriptors:;
- (float)motionTraversalCost;
- (void)setMotionTraversalCost:;
- (unsigned long long)primitiveKeyframeCount;
- (void)setPrimitiveKeyframeCount:;
- (float)primitiveMotionStartTime;
- (void)setPrimitiveMotionStartTime:;
- (float)primitiveMotionEndTime;
- (void)setPrimitiveMotionEndTime:;
- (unsigned long long)splitHeuristic;
- (void)setSplitHeuristic:;
- (float)splitCapacity;
- (void)setSplitCapacity:;
- (float)minOverlap;
- (void)setMinOverlap:;
@end
