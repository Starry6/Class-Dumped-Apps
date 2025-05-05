@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem
@property (nonatomic) NSArray templateItems;
@property (nonatomic) NSArray communicationOptions;
@property (nonatomic) SAUITemplateEdgeInsets fullScreenPaddingDelta;
@property (nonatomic) BOOL hasPriorityLayout;
@property (nonatomic) SAUITemplateEdgeInsets padding;
@property (nonatomic) NSArray presentationOptions;
@property (nonatomic) BOOL shouldBeOffscreenInPartial;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)templateItems;
- (void)setTemplateItems:;
+ (id)baseItemGroup;
+ (id)baseItemGroupWithDictionary:context:;
@end
