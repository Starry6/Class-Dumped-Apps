@interface SASTColumnDataListItem : AceObject
@property (nonatomic) <SASTTemplateAction> action;
@property (nonatomic) NSArray decoratedRows;
@property (nonatomic) SAUINanoImageResource imageResource;
@property (nonatomic) NSString rowLayout;
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)action;
- (void)setTitle:;
- (void)setAction:;
- (id)title;
- (id)encodedClassName;
- (id)imageResource;
- (void)setImageResource:;
- (id)decoratedRows;
- (void)setDecoratedRows:;
- (id)rowLayout;
- (void)setRowLayout:;
+ (id)columnDataListItem;
+ (id)columnDataListItemWithDictionary:context:;
@end
