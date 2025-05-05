@interface SKBitmapFont : NSObject
- (id)init;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)fontName;
- (id).cxx_construct;
- (double)lineHeight;
- (BOOL)loadFontWithTexture:fontDataString:;
- (id)spriteForCharacterNamed:;
- (double)advanceForCharacterNamed:;
- (double)kerningForCharacterNamed:followedBy:;
+ (BOOL)supportsSecureCoding;
+ (id)fontForFileNamed:;
+ (id)fontWithTexture:fontDataString:;
+ (id)_fontForFileNamed:;
@end
