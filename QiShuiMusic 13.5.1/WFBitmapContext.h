@interface WFBitmapContext : NSObject
@property (nonatomic) {CGSize=dd} size;
@property (nonatomic) double scale;
@property (nonatomic) ^{CGContext=} CGContext;
- (void)dealloc;
- (void)resignCurrent;
- (id)CGContext;
- (double)scale;
- (void)becomeCurrent;
- (id)image;
- (id)size;
- (id)initWithCGContext:scale:;
- (id)initWithSize:opaque:scale:;
- (id)initWithSize:opaque:scale:colorspace:;
- (id)initWithSize:opaque:scale:colorspace:flipped:;
- (id)imageWithOrientation:;
+ (id)contextWithSize:scale:;
+ (id)contextWithSize:scale:flipped:;
+ (id)contextWithDeviceScreenScaleAndSize:;
+ (id)currentContextWithScale:;
@end
