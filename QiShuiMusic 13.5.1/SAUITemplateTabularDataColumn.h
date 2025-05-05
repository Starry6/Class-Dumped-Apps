@interface SAUITemplateTabularDataColumn : SAUITemplateBaseItem
@property (nonatomic) NSNumber minimumWidth;
@property (nonatomic) NSNumber rightMargin;
@property (nonatomic) NSArray values;
- (id)minimumWidth;
- (id)groupIdentifier;
- (id)values;
- (void)setMinimumWidth:;
- (id)encodedClassName;
- (id)rightMargin;
- (void)setValues:;
- (void)setRightMargin:;
+ (id)tabularDataColumn;
+ (id)tabularDataColumnWithDictionary:context:;
@end
