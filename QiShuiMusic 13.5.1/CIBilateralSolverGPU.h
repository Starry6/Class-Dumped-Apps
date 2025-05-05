@interface CIBilateralSolverGPU : NSObject
@property (nonatomic) BOOL useTrilinearInterpolation;
- (int)_doSliceTrilinearWithCommandBuffer:ref_tex:o_tex:;
- (BOOL)useTrilinearInterpolation;
- (void)_prepareResources:;
- (void).cxx_destruct;
- (int)_doPCGWithCommandBuffer:nIterations:;
- (void)setUseTrilinearInterpolation:;
- (void)_setupBuffer;
- (int)_doSliceWithCommandBuffer:o_tex:;
- (void)_setupPipelineCache;
- (id)initWithWidth:height:maxVertices:commandBuffer:;
- (int)doSolveWithBilateralGridhash:reference:disparity:confidence:output:lambda:maxIterations:offsets:;
- (void)_setupMetal;
- (void)_setupPipelinesAsync:;
- (int)_doBistochastizeWithCommandBuffer:t_tex:c_tex:lambda:nIterations:;
@end
