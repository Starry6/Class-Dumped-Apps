@interface SAUITemplateLabel : SAUITemplateBaseItem
@property (nonatomic) NSDictionary attributedTexts;
@property (nonatomic) SAUITemplateAttributedString text;
- (id)groupIdentifier;
- (void)setText:;
- (id)encodedClassName;
- (id)text;
- (id)attributedTexts;
- (void)setAttributedTexts:;
+ (id)label;
+ (id)labelWithDictionary:context:;
@end
