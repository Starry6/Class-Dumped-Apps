@interface VCPSceneProcessingImageManager : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (int)_createPixelBuffer:withWidth:andHeight:;
- (int)_createPixelBuffer:withMinorDimension:fromFullPixelBuffer:;
- (int)_pooledPixelBuffer:withDimension:;
- (int)fullPixelBuffer:toScaledBuffer:;
- (int)_createPixelBuffer:withColorSpace:fromPixelBuffer:;
- (int)loadFullPixelBuffer:scaledPixelBuffer299:scaledPixelBuffer360:fromImageURL:abnormalDimension:;
- (int)scalePixelBuffer:toPixelBuffer:width:height:;
+ (id)imageManager;
@end
