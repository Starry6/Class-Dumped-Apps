@interface VCPImageManager : NSObject
- (void)flushCache;
- (id)init;
- (void)dealloc;
- (int)decodeImageSource:withUniformTypeIdentifier:pixelFormat:maxDimension:orientation:pixelBuffer:;
- (int)drawImage:pixelFormat:withOrientation:maxDimension:pixelBuffer:;
- (int)createPixelBufferWithWidth:height:pixelFormat:pixelBuffer:;
- (id)pixelBufferWithFormat:andMaxDimension:fromImageURL:;
- (id)imageForResource:pixelFormat:maxDimension:orientation:;
- (id)pixelBufferWithFormat:andMaxDimension:fromImageURL:orientation:;
- (int)acceleratedDecodeImageData:pixelFormat:maxDimension:pixelBuffer:orientation:flushCache:;
- (id)imageForResource:pixelFormat:maxDimension:;
- (void).cxx_destruct;
- (id)dataForResource:;
- (id)pixelBufferWithFormat:andMaxDimension:fromImageURL:flushCache:orientation:;
- (int)convertPixelBuffer:toPixelFormat:flushCache:;
- (id)pixelBufferWithFormat:andMaxDimension:fromData:withUniformTypeIdentifier:flushCache:orientation:;
- (int)compressCVPixelBuffer:toJPEGData:targetBitStreamLength:padding:;
- (id)pixelBufferWithFormat:fromImageURL:flushCache:;
- (id)pixelBufferWithFormat:fromImageURL:flushCache:orientation:;
- (id)imageForResource:pixelFormat:;
+ (BOOL)_exportReencodedJPEG;
+ (BOOL)allowFastPathDecodeWithUniformType:pixelWidth:andPixelHeight:;
+ (BOOL)loggingEnabled;
+ (BOOL)canDecodeAcceleratedUniformTypeIdentifier:;
+ (id)sharedImageManager;
@end
