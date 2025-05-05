@interface MPSTemporaryMatrix : MPSMatrix
@property (nonatomic) Q readCount;
- (void)synchronizeOnCommandBuffer:;
- (unsigned long long)readCount;
- (void)setReadCount:;
- (id)initWithCommandBuffer:matrixDescriptor:;
+ (id)temporaryMatrixWithCommandBuffer:matrixDescriptor:;
+ (void)prefetchStorageWithCommandBuffer:matrixDescriptorList:;
@end
