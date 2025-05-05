@interface ARGPUCubemapConverter : NSObject
- (id)init;
- (void).cxx_destruct;
- (id)equirectangularTextureFromCubemapTexture:rotation:width:height:;
- (id)cubemapTextureFromEquirectangularTexture:rotation:size:;
@end
