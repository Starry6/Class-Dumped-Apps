@interface MPSMatrixCopyToImage : MPSKernel
@property (nonatomic) {?=QQQ} sourceMatrixOrigin;
@property (nonatomic) Q sourceMatrixBatchIndex;
@property (nonatomic) Q dataLayout;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)dataLayout;
- (id)initWithDevice:dataLayout:;
- (void)encodeToCommandBuffer:sourceMatrix:destinationImage:;
- (void)encodeBatchToCommandBuffer:sourceMatrix:destinationImages:;
- (void)setSourceMatrixOrigin:;
- (void)encodeToCommandEncoder:commandBuffer:sourceMatrix:destinationImage:;
- (void)encodeBatchToCommandBuffer:encoder:sourceMatrix:destinationImages:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceMatrix:destinationImages:;
- (id)sourceMatrixOrigin;
- (unsigned long long)sourceMatrixBatchIndex;
- (void)setSourceMatrixBatchIndex:;
+ (id)libraryInfo:;
@end
