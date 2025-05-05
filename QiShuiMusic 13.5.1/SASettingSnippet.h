@interface SASettingSnippet : SAUISnippet
@property (nonatomic) NSArray settingKeys;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)settingKeys;
- (void)setSettingKeys:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
