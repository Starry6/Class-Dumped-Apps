@interface FaceCoreImage : NSObject
@property (nonatomic) Q width;
@property (nonatomic) Q height;
@property (nonatomic) Q bytesPerRow;
@property (nonatomic) * alignedImageData;
- (void)dealloc;
- (unsigned long long)height;
- (unsigned long long)width;
- (id)initWithCGImage:;
- (unsigned long long)bytesPerRow;
- (id)initWithWidth:height:bytesPerRow:buffer:freeWhenDone:;
- (id)initWithCVPixelBuffer:;
- (char *)alignedImageData;
@end
