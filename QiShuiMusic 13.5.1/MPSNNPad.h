@interface MPSNNPad : MPSCNNKernel
@property (nonatomic) {MPSImageCoordinate=QQQ} paddingSizeBefore;
@property (nonatomic) {MPSImageCoordinate=QQQ} paddingSizeAfter;
@property (nonatomic) float fillValue;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)resultStateForSourceImage:sourceStates:destinationImage:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)initWithDevice:;
- (BOOL)isResultStateReusedAcrossBatch;
- (id)temporaryResultStateForCommandBuffer:sourceImage:sourceStates:destinationImage:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:;
- (id)initWithDevice:paddingSizeBefore:paddingSizeAfter:;
- (id)initWithDevice:paddingSizeBefore:paddingSizeAfter:fillValueArray:;
- (id)paddingSizeBefore;
- (void)setPaddingSizeBefore:;
- (id)paddingSizeAfter;
- (void)setPaddingSizeAfter:;
- (float)fillValue;
- (void)setFillValue:;
+ (id)libraryInfo:;
@end
