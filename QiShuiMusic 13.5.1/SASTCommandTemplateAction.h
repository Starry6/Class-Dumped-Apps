@interface SASTCommandTemplateAction : AceObject
@property (nonatomic) NSArray commands;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)commands;
- (id)encodedClassName;
- (void)setCommands:;
+ (id)commandTemplateAction;
+ (id)commandTemplateActionWithDictionary:context:;
@end
