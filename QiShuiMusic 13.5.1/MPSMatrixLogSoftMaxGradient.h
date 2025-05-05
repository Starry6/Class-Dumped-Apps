@interface MPSMatrixLogSoftMaxGradient : MPSMatrixSoftMaxGradient
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:gradientMatrix:forwardOutputMatrix:resultMatrix:;
+ (id)libraryInfo:;
@end
