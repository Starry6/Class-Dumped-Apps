@interface VNCoreMLRequestConfiguration : VNImageBasedRequestConfiguration
@property (nonatomic) Q imageCropAndScaleOption;
@property (nonatomic) <NSObject><NSCopying> modelCachingIdentifier;
- (void).cxx_destruct;
- (id)initWithRequestClass:;
- (id)copyWithZone:;
- (unsigned long long)imageCropAndScaleOption;
- (void)setImageCropAndScaleOption:;
- (void)updateWithPropertiesOfModel:;
- (id)modelCachingIdentifier;
- (void)setModelCachingIdentifier:;
@end
