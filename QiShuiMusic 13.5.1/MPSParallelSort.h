@interface MPSParallelSort : MPSKernel
@property (nonatomic) I keyPairDataType;
@property (nonatomic) I valuePairDataType;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (id)initPrivateWithDevice:;
- (void)encodeToCommandBuffer:sourceBuffer:sourceOffset:destinationBuffer:destinationOffset:numEntries:;
- (id)initWithDevice:keyPairDataType:valuePairDataType:;
- (id)initWithDevice:keyPairDataType:valuePairDataType:sortOp:;
- (void)encodeToCommandBuffer:sourceKeyBuffer:sourceKeyOffset:sourceValueBuffer:sourceValueOffset:destinationKeyBuffer:destinationKeyOffset:destinationValueBuffer:destinationValueOffset:numEntries:;
- (unsigned int)keyPairDataType;
- (unsigned int)valuePairDataType;
+ (id)libraryInfo:;
@end
