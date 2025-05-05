@interface MPSNNResizeBilinear : MPSCNNKernel
@property (nonatomic) Q resizeWidth;
@property (nonatomic) Q resizeHeight;
@property (nonatomic) BOOL alignCorners;
- (id)initWithCoder:device:;
- (id)copyWithZone:device:;
- (id)debugDescription;
- (void)encodeWithCoder:;
- (id)destinationImageDescriptorForSourceImages:sourceStates:paddingMethod:sourceOffset:;
- (unsigned long long)resizeWidth;
- (unsigned long long)resizeHeight;
- (BOOL)alignCorners;
- (id)initWithDevice:resizeWidth:resizeHeight:alignCorners:;
+ (id)libraryInfo:;
@end
