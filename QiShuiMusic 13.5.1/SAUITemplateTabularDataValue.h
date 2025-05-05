@interface SAUITemplateTabularDataValue : SAUITemplateBaseItem
@property (nonatomic) SAUITemplateAttributedString attributedText;
@property (nonatomic) NSDictionary attributedTexts;
@property (nonatomic) BOOL highlighted;
@property (nonatomic) SAUIImageResource image;
@property (nonatomic) double imagePointHeight;
@property (nonatomic) double imagePointWidth;
@property (nonatomic) NSArray themeImages;
- (void)setAttributedText:;
- (id)groupIdentifier;
- (void)setImage:;
- (BOOL)highlighted;
- (id)encodedClassName;
- (void)setHighlighted:;
- (id)attributedText;
- (id)image;
- (id)attributedTexts;
- (void)setAttributedTexts:;
- (double)imagePointHeight;
- (void)setImagePointHeight:;
- (double)imagePointWidth;
- (void)setImagePointWidth:;
- (id)themeImages;
- (void)setThemeImages:;
+ (id)tabularDataValue;
+ (id)tabularDataValueWithDictionary:context:;
@end
