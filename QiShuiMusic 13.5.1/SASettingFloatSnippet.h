@interface SASettingFloatSnippet : SASettingNumericSnippet
@property (nonatomic) NSNumber value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
+ (id)floatSnippet;
+ (id)floatSnippetWithDictionary:context:;
@end
