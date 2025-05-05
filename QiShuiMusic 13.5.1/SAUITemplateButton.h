@interface SAUITemplateButton : SAUITemplateBaseItem
@property (nonatomic) NSArray commands;
- (id)groupIdentifier;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
+ (id)button;
+ (id)buttonWithDictionary:context:;
@end
