@interface MFHardwareJPEGScaler : NSObject
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithImageData:imageSource:;
- (BOOL)_isJPEGImage:;
- (BOOL)_decodeImageToIOSurface;
- (BOOL)scaleImageToFitLargestDimension:dataConsumer:;
@end
