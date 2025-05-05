@interface MPSParallelReduce : MPSKernel
@property (nonatomic) I sourceDataType;
@property (nonatomic) I destinationDataType;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initPrivateWithDevice:;
- (id)initWithDevice:sourceDataType:destinationDataType:;
- (void)encodeToCommandBuffer:sourceBuffer:sourceOffset:destinationBuffer:destinationOffset:numEntries:;
- (unsigned int)sourceDataType;
- (unsigned int)destinationDataType;
- (id)initWithDevice:sourceDataType:destinationDataType:reduceOp:;
+ (id)libraryInfo:;
@end
