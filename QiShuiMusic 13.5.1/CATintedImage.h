@interface CATintedImage : NSObject
@property (nonatomic) ^{CGImage=} image;
@property (nonatomic) ^{CGColor=} tint;
- (id)CA_copyRenderValue;
- (void)dealloc;
- (void)setImage:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (id)tint;
- (void)encodeWithCAMLWriter:;
- (void)setTint:;
- (id)CAMLTypeForKey:;
- (id)image;
- (void)CAMLParser:setValue:forKey:;
- (void)CA_prepareRenderValue;
+ (void)CAMLParserStartElement:;
+ (id)tintedImageWithCGImage:tint:copyFlags:;
+ (BOOL)supportsSecureCoding;
+ (id)tintedImageWithCABackingStore:;
+ (id)tintedImageWithCGImage:tint:;
@end
