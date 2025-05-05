@interface SASTBodyTextItem : AceObject
@property (nonatomic) NSString alignment;
@property (nonatomic) NSString bodyText;
@property (nonatomic) SADecoratedString decoratedBodyText;
@property (nonatomic) NSString position;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setPosition:;
- (id)bodyText;
- (void)setBodyText:;
- (id)position;
- (id)groupIdentifier;
- (void)setAlignment:;
- (id)encodedClassName;
- (id)alignment;
- (id)decoratedBodyText;
- (void)setDecoratedBodyText:;
+ (id)bodyTextItem;
+ (id)bodyTextItemWithDictionary:context:;
@end
