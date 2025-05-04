@interface AWEPOIExtractFrameUtil : NSObject
+ (void)configFrameExtractMaterials:configModel:;
+ (id)configItemWithConfigModel:duration:;
+ (id)extractFrameSizeWithConfigModel:;
+ (void)configFrameExtractMaterials:preferredSize:maxFrames:fps:;
+ (void)configFrameExtractMaterials:preferredSize:framesCount:;
+ (void)generateFrameExtractMaterialsWithMaterials:configModel:completion:;
@end
