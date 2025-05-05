@interface PixelBufferPoolKey : NSObject
@property (nonatomic) {CGSize=dd} frameSize;
@property (nonatomic) I pixelFormatType;
- (unsigned long long)hash;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)frameSize;
- (unsigned int)pixelFormatType;
- (id)initWithSize:pixelFormatType:;
@end
