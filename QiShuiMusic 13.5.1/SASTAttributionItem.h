@interface SASTAttributionItem : AceObject
@property (nonatomic) <SASTTemplateAction> action;
@property (nonatomic) NSString attributionPosition;
@property (nonatomic) SAUINanoImageResource imageResource;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setText:;
- (id)action;
- (void)setAction:;
- (id)encodedClassName;
- (id)text;
- (id)imageResource;
- (void)setImageResource:;
- (id)attributionPosition;
- (void)setAttributionPosition:;
+ (id)attributionItem;
+ (id)attributionItemWithDictionary:context:;
@end
