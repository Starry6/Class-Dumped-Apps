@interface MPSNNCropAndResizeBilinear : MPSCNNKernel
@property (nonatomic) Q resizeWidth;
@property (nonatomic) Q resizeHeight;
@property (nonatomic) Q numberOfRegions;
@property (nonatomic) r^{MPSRegion={MPSOrigin=ddd}{MPSSize=ddd}} regions;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (void)dealloc;
- (id)regions;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (unsigned long long)numberOfRegions;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (unsigned long long)resizeWidth;
- (unsigned long long)resizeHeight;
- (id)initWithDevice:resizeWidth:resizeHeight:numberOfRegions:regions:;
+ (id)libraryInfo:;
@end
