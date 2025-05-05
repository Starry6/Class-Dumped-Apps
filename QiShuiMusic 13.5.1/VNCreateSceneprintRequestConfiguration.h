@interface VNCreateSceneprintRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) BOOL returnAllResults;
@property (nonatomic) BOOL useCenterTileOnly;
@property (nonatomic) Q imageCropAndScaleOption;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (BOOL)returnAllResults;
- (void)setReturnAllResults:;
- (BOOL)useCenterTileOnly;
- (void)setUseCenterTileOnly:;
@end
