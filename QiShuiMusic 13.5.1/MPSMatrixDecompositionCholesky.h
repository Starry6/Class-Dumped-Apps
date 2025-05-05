@interface MPSMatrixDecompositionCholesky : MPSMatrixUnaryKernel
@property (nonatomic) BOOL lower;
@property (nonatomic) Q order;
- (unsigned long long)order;
- (id)initWithDevice:lower:order:;
- (void)encodeToCommandBuffer:sourceMatrix:resultMatrix:status:;
- (BOOL)lower;
+ (id)libraryInfo:;
@end
