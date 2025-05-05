@interface MPSMatrixSoftMaxGradient : MPSMatrixBinaryKernel
@property (nonatomic) Q sourceRows;
@property (nonatomic) Q sourceColumns;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setSourceRows:;
- (void)setSourceColumns:;
- (void)encodeToCommandBuffer:gradientMatrix:forwardOutputMatrix:resultMatrix:;
- (unsigned long long)sourceColumns;
- (unsigned long long)sourceRows;
+ (id)libraryInfo:;
@end
