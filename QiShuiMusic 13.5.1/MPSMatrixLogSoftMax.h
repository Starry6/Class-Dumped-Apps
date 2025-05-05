@interface MPSMatrixLogSoftMax : MPSMatrixSoftMax
- (id)initWithCoder:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)encodeToCommandBuffer:inputMatrix:resultMatrix:;
+ (id)libraryInfo:;
@end
