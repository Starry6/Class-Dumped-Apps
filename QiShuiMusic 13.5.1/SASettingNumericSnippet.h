@interface SASettingNumericSnippet : SASettingSnippet
@property (nonatomic) BOOL increment;
- (id)groupIdentifier;
- (BOOL)increment;
- (id)encodedClassName;
- (void)setIncrement:;
+ (id)numericSnippet;
+ (id)numericSnippetWithDictionary:context:;
@end
