@interface IESImgPreProcessor : NSObject
@property (nonatomic) MTKTextureLoader loader;
- (void)blitImg:outTex:;
- (id)createImageFromTexture:;
- (id)createTextureFromImage:;
- (id)init;
- (void).cxx_destruct;
- (id)loader;
- (void)setLoader:;
@end
