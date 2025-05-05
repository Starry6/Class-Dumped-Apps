@interface SASTSubheaderItem : AceObject
@property (nonatomic) SAUIDecoratedText leftText;
@property (nonatomic) SAUIDecoratedText rightText;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)leftText;
- (void)setLeftText:;
- (id)rightText;
- (void)setRightText:;
+ (id)subheaderItem;
+ (id)subheaderItemWithDictionary:context:;
@end
