@interface AWESearchImageCompressor : NSObject
@property (nonatomic) AWESearchImageCompressorConfig config;
- (void)impResizeAndCompressImage;
- (id)impResizeImage:maxSize:;
- (id)impCompressImage:maxDataSize:;
- (void)trackSearchImageCompressWithResult:;
- (void)resizeAndCompressImageWithConfig:;
- (void)setConfig:;
- (id)init;
- (id)config;
- (void).cxx_destruct;
+ (id)sharedInstance;
@end
