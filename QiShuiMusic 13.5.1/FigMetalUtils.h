@interface FigMetalUtils : NSObject
@property (nonatomic) <MTLDevice> device;
- (unsigned long long)getPixelSizeInBytes:;
- (void).cxx_destruct;
- (id)initWithDevice:;
- (id)device;
- (unsigned long long)computeLinearTextureStride:format:;
- (id)texture2DFromBuffer:width:height:format:offset:usage:;
@end
