@interface MPSMatrixRandom : MPSKernel
@property (nonatomic) I destinationDataType;
@property (nonatomic) Q distributionType;
@property (nonatomic) Q batchStart;
@property (nonatomic) Q batchSize;
- (id)initWithCoder:device:;
- (unsigned long long)batchSize;
- (void)setBatchSize:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)batchStart;
- (void)setBatchStart:;
- (unsigned int)destinationDataType;
- (unsigned long long)distributionType;
- (id)initWithDevice:destinationDataType:distributionType:;
- (void)encodeToCommandBuffer:destinationVector:;
- (void)encodeToCommandBuffer:destinationMatrix:;
+ (id)libraryInfo:;
@end
