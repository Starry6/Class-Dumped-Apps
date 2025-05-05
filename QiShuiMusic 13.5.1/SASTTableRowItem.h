@interface SASTTableRowItem : AceObject
@property (nonatomic) NSArray columnValues;
@property (nonatomic) SAUINanoImageResource imageResource;
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setColumnValues:;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)columnValues;
- (id)imageResource;
- (void)setImageResource:;
+ (id)tableRowItem;
+ (id)tableRowItemWithDictionary:context:;
@end
