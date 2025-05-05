@interface SAUITemplateTabularDataGroup : SAUITemplateBaseItem
@property (nonatomic) NSArray items;
- (id)groupIdentifier;
- (id)items;
- (void)setItems:;
- (id)encodedClassName;
+ (id)tabularDataGroup;
+ (id)tabularDataGroupWithDictionary:context:;
@end
