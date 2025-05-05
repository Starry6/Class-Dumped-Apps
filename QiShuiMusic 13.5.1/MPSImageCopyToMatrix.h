@interface MPSImageCopyToMatrix : MPSKernel
@property (nonatomic) {?=QQQ} destinationMatrixOrigin;
@property (nonatomic) Q destinationMatrixBatchIndex;
@property (nonatomic) Q dataLayout;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (unsigned long long)dataLayout;
- (void)encodeBatchToCommandBuffer:sourceImages:destinationMatrix:;
- (id)initWithDevice:dataLayout:;
- (void)encodeToCommandBuffer:sourceImage:destinationMatrix:;
- (void)encodeToCommandEncoder:commandBuffer:sourceImage:destinationMatrix:;
- (void)encodeBatchToCommandBuffer:encoder:sourceImages:destinationMatrix:;
- (void)encodeBatchToCommandEncoder:commandBuffer:sourceImages:destinationMatrix:;
- (id)destinationMatrixOrigin;
- (void)setDestinationMatrixOrigin:;
- (unsigned long long)destinationMatrixBatchIndex;
- (void)setDestinationMatrixBatchIndex:;
+ (id)libraryInfo:;
@end
