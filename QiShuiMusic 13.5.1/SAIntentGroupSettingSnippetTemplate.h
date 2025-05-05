@interface SAIntentGroupSettingSnippetTemplate : SAIntentGroupSnippetTemplate
@property (nonatomic) NSString alignment;
@property (nonatomic) NSString text;
- (id)groupIdentifier;
- (void)setAlignment:;
- (void)setText:;
- (id)encodedClassName;
- (id)alignment;
- (id)text;
+ (id)settingSnippetTemplate;
+ (id)settingSnippetTemplateWithDictionary:context:;
@end
