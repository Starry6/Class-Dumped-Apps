@interface SASTViewTemplateAction : AceObject
@property (nonatomic) NSArray commands;
@property (nonatomic) SASTItemGroup itemGroupView;
@property (nonatomic) NSString viewTitle;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)commands;
- (id)viewTitle;
- (id)encodedClassName;
- (void)setCommands:;
- (id)itemGroupView;
- (void)setItemGroupView:;
- (void)setViewTitle:;
+ (id)viewTemplateAction;
+ (id)viewTemplateActionWithDictionary:context:;
@end
