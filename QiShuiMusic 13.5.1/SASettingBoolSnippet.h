@interface SASettingBoolSnippet : SASettingSnippet
@property (nonatomic) BOOL toggle;
@property (nonatomic) NSNumber value;
- (id)groupIdentifier;
- (void)setValue:;
- (id)encodedClassName;
- (id)value;
- (BOOL)toggle;
- (void)setToggle:;
+ (id)boolSnippet;
+ (id)boolSnippetWithDictionary:context:;
@end
