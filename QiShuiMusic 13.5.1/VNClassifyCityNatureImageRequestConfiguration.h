@interface VNClassifyCityNatureImageRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q imageCropAndScaleOption;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
@end
