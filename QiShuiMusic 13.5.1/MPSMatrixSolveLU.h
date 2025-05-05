@interface MPSMatrixSolveLU : MPSMatrixBinaryKernel
@property (nonatomic) MPSMatrixSolveTriangular trsmU;
@property (nonatomic) MPSMatrixSolveTriangular trsmL;
@property (nonatomic) BOOL transpose;
@property (nonatomic) Q order;
@property (nonatomic) Q numberOfRightHandSides;
- (void)dealloc;
- (unsigned long long)order;
- (void)setOrder:;
- (BOOL)transpose;
- (unsigned long long)numberOfRightHandSides;
- (void)setNumberOfRightHandSides:;
- (id)initWithDevice:transpose:order:numberOfRightHandSides:;
- (void)encodeToCommandEncoder:commandBuffer:sourceMatrix:rightHandSideMatrix:pivotIndices:solutionMatrix:;
- (void)encodeToCommandBuffer:sourceMatrix:rightHandSideMatrix:pivotIndices:solutionMatrix:;
- (id)trsmL;
- (void)setTrsmL:;
- (id)trsmU;
- (void)setTrsmU:;
+ (id)libraryInfo:;
@end
