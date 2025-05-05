@interface SAUITemplateTabularDataRowStyleRule : AceObject
@property (nonatomic) NSNumber minimumHeight;
@property (nonatomic) NSNumber rowCount;
@property (nonatomic) NSNumber rowStartIndex;
@property (nonatomic) NSNumber showTopBorder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setMinimumHeight:;
- (id)rowCount;
- (id)minimumHeight;
- (id)groupIdentifier;
- (id)encodedClassName;
- (void)setRowCount:;
- (id)rowStartIndex;
- (void)setRowStartIndex:;
- (id)showTopBorder;
- (void)setShowTopBorder:;
+ (id)tabularDataRowStyleRule;
+ (id)tabularDataRowStyleRuleWithDictionary:context:;
@end
