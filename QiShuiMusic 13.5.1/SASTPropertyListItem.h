@interface SASTPropertyListItem : AceObject
@property (nonatomic) NSString alignment;
@property (nonatomic) SAUIDecoratedText decoratedTitle;
@property (nonatomic) NSArray decoratedValues;
@property (nonatomic) SAUINanoImageResource imageResource;
@property (nonatomic) NSString title;
@property (nonatomic) NSArray values;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setAlignment:;
- (id)values;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (void)setValues:;
- (id)alignment;
- (id)imageResource;
- (void)setImageResource:;
- (id)decoratedTitle;
- (void)setDecoratedTitle:;
- (id)decoratedValues;
- (void)setDecoratedValues:;
+ (id)propertyListItem;
+ (id)propertyListItemWithDictionary:context:;
@end
