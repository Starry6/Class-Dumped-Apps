@interface MPSMatrixDecompositionLU : MPSMatrixUnaryKernel
@property (nonatomic) MPSMatrixMultiplication gemmKernel;
@property (nonatomic) MPSMatrixSolveTriangular trsmKernel;
@property (nonatomic) Q rows;
@property (nonatomic) Q columns;
@property (nonatomic) @? copyBlock;
- (unsigned long long)columns;
- (void)dealloc;
- (void)setRows:;
- (unsigned long long)rows;
- (void)setColumns:;
- (id)initWithDevice:rows:columns:;
- (void)encodeToCommandEncoder:commandBuffer:sourceMatrix:resultMatrix:pivotIndices:status:;
- (void)encodeToCommandBuffer:sourceMatrix:resultMatrix:pivotIndices:status:;
- (id)gemmKernel;
- (void)setGemmKernel:;
- (id)trsmKernel;
- (void)setTrsmKernel:;
- (id)copyBlock;
- (void)setCopyBlock:;
+ (id)libraryInfo:;
@end
