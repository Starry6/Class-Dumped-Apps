@interface SASTTableHeaderItem : AceObject
@property (nonatomic) NSArray columnValues;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setColumnValues:;
- (id)encodedClassName;
- (id)columnValues;
+ (id)tableHeaderItem;
+ (id)tableHeaderItemWithDictionary:context:;
@end
