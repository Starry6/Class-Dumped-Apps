@interface MPSMatrixSolveTriangular : MPSMatrixBinaryKernel
@property (nonatomic) MPSMatrix workspace;
@property (nonatomic) BOOL right;
@property (nonatomic) BOOL upper;
@property (nonatomic) BOOL transpose;
@property (nonatomic) BOOL unit;
@property (nonatomic) Q order;
@property (nonatomic) Q numberOfRightHandSides;
@property (nonatomic) double alpha;
- (id)workspace;
- (id)copyWithZone:device:;
- (void)dealloc;
- (unsigned long long)order;
- (double)alpha;
- (BOOL)right;
- (BOOL)unit;
- (void)setWorkspace:;
- (void)setOrder:;
- (BOOL)transpose;
- (id)initWithDevice:right:upper:transpose:unit:order:numberOfRightHandSides:alpha:;
- (void)encodeToCommandBuffer:encoder:sourceMatrix:rightHandSideMatrix:solutionMatrix:;
- (void)encodeToCommandBuffer:sourceMatrix:rightHandSideMatrix:solutionMatrix:;
- (BOOL)upper;
- (unsigned long long)numberOfRightHandSides;
- (void)setNumberOfRightHandSides:;
+ (id)libraryInfo:;
@end
