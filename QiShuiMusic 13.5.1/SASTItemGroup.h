@interface SASTItemGroup : SAUISnippet
@property (nonatomic) NSArray fallbackCommands;
@property (nonatomic) NSArray templateItems;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)templateItems;
- (void)setTemplateItems:;
- (id)fallbackCommands;
- (void)setFallbackCommands:;
+ (id)itemGroup;
+ (id)itemGroupWithDictionary:context:;
@end
