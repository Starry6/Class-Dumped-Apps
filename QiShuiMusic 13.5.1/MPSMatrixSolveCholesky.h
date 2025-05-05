@interface MPSMatrixSolveCholesky : MPSMatrixBinaryKernel
@property (nonatomic) BOOL upper;
@property (nonatomic) Q order;
@property (nonatomic) Q numberOfRightHandSides;
- (void)dealloc;
- (unsigned long long)order;
- (void)setOrder:;
- (void)encodeToCommandBuffer:sourceMatrix:rightHandSideMatrix:solutionMatrix:;
- (BOOL)upper;
- (unsigned long long)numberOfRightHandSides;
- (void)setNumberOfRightHandSides:;
- (id)initWithDevice:upper:order:numberOfRightHandSides:;
+ (id)libraryInfo:;
@end
