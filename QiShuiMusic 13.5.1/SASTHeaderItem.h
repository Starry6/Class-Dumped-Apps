@interface SASTHeaderItem : AceObject
@property (nonatomic) SAUIDecoratedText header;
@property (nonatomic) SAUIDecoratedText subtitle;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setHeader:;
- (id)groupIdentifier;
- (void)setText:;
- (void)setSubtitle:;
- (id)encodedClassName;
- (id)subtitle;
- (id)header;
- (id)text;
+ (id)headerItem;
+ (id)headerItemWithDictionary:context:;
@end
