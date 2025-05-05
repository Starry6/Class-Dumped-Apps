@interface WFWorkflowIcon : NSObject
@property (nonatomic) q backgroundColorValue;
@property (nonatomic) S glyphCharacter;
@property (nonatomic) NSData customImageData;
@property (nonatomic) WFColor backgroundColor;
@property (nonatomic) WFIcon icon;
- (id)init;
- (long long)backgroundColorValue;
- (id)backgroundColor;
- (id)icon;
- (id)initWithCoder:;
- (unsigned short)glyphCharacter;
- (unsigned long long)hash;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (BOOL)isEqual:;
- (id)copyWithZone:;
- (id)customImageData;
- (id)initWithPaletteColor:glyphCharacter:customImageData:;
- (id)initWithBackgroundColorValue:glyphCharacter:customImageData:;
+ (BOOL)supportsSecureCoding;
+ (unsigned long long)randomPaletteColor;
+ (unsigned short)defaultGlyphCharacter;
@end
