@interface ARImageScalingPassDescription : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) I pixelBufferFormat;
- (id)initWithSize:;
- (id)description;
- (void)setSize:;
- (id)size;
- (unsigned int)pixelBufferFormat;
- (void)setPixelBufferFormat:;
@end
