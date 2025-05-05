@interface SAUITemplateTabularDataRow : SAUITemplateTabularDataGroup
@property (nonatomic) NSArray actions;
- (id)groupIdentifier;
- (void)setActions:;
- (id)actions;
- (id)encodedClassName;
+ (id)tabularDataRow;
+ (id)tabularDataRowWithDictionary:context:;
@end
