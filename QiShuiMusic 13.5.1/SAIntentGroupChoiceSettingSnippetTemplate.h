@interface SAIntentGroupChoiceSettingSnippetTemplate : SAIntentGroupSettingSnippetTemplate
@property (nonatomic) BOOL selected;
@property (nonatomic) <SAServerBoundCommand> updateSlotCommand;
- (BOOL)selected;
- (id)groupIdentifier;
- (void)setSelected:;
- (id)encodedClassName;
- (id)updateSlotCommand;
- (void)setUpdateSlotCommand:;
+ (id)choiceSettingSnippetTemplate;
+ (id)choiceSettingSnippetTemplateWithDictionary:context:;
@end
