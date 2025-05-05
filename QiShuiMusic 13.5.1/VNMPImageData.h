@interface VNMPImageData : NSObject
@property (nonatomic) ^{vImage_Buffer=^vQQQ} image;
@property (nonatomic) ^{__CVBuffer=} imageCVPixelBuffer;
@property (nonatomic) NSString imageFilePath;
@property (nonatomic) BOOL freeImageInDealloc;
@property (nonatomic) NSString externalImageId;
@property (nonatomic) q exifTimestamp;
- (void)dealloc;
- (void).cxx_destruct;
- (id)image;
- (id)imageFilePath;
- (void)setImageFilePath:;
- (id)initWithVImage:externalImageId:andExifTimestampString:error:;
- (id)initWithVImage:externalImageId:andExifTimestampValue:error:;
- (id)initWithCVPixelBufferImage:externalImageId:andExifTimestampString:error:;
- (id)initWithCVPixelBufferImage:externalImageId:andExifTimestampValue:error:;
- (id)imageCVPixelBuffer;
- (BOOL)freeImageInDealloc;
- (void)setFreeImageInDealloc:;
- (id)externalImageId;
- (long long)exifTimestamp;
@end
