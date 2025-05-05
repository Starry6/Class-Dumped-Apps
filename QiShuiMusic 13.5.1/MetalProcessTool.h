@interface MetalProcessTool : NSObject
+ (id)NativePixelBufferTransMetalTextureForYUV420P:lineSize:width:height:softStrideOpt:;
+ (id)CVPixelBufferTransMetalTextureForYUV420P:videoCache:;
@end
