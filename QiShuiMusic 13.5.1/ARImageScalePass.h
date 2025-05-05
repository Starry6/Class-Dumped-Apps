@interface ARImageScalePass : NSObject
@property (nonatomic) I conversionPixelFormatType;
@property (nonatomic) {CGSize=dd} scaledSize;
- (void)dealloc;
- (id)initWithDescription:;
- (id)scaledSize;
- (void)setConversionPixelFormatType:;
- (id)scalePixelBuffer:;
- (unsigned int)conversionPixelFormatType;
@end
