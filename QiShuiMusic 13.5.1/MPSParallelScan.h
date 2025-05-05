@interface MPSParallelScan : MPSKernel
@property (nonatomic) I sourceDataType;
@property (nonatomic) I destinationDataType;
@property (nonatomic) Q scanImpl;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (void)setScanImpl:;
- (id)initPrivateWithDevice:;
- (id)initWithDevice:sourceDataType:destinationDataType:;
- (id)initWithDevice:sourceDataType:destinationDataType:scanOp:;
- (void)encodeToCommandBuffer:sourceBuffer:sourceOffset:destinationBuffer:destinationOffset:numEntries:;
- (unsigned int)sourceDataType;
- (unsigned int)destinationDataType;
- (unsigned long long)scanImpl;
+ (id)libraryInfo:;
@end
