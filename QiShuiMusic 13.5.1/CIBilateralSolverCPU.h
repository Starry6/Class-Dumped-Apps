@interface CIBilateralSolverCPU : NSObject
@property (nonatomic) BOOL useTrilinearInterpolation;
- (void)dealloc;
- (BOOL)useTrilinearInterpolation;
- (void)setUseTrilinearInterpolation:;
- (id)initWithWidth:height:maxVertices:;
- (int)doSolveWithBilateralGridhash:reference:disparity:confidence:output:lambda:maxIterations:;
- (void)_doBistochastize:nIterations:;
- (void)_doSolve:t:c:x:lambda:pcgMaxIterations:;
- (void)_pcg:A:lambda:b:x:M:tol:maxIterations:;
+ (void)_computeAx:A:Dn:lambda:x:output:;
@end
