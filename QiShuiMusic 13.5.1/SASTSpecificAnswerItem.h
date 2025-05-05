@interface SASTSpecificAnswerItem : AceObject
@property (nonatomic) SAUIDecoratedText decoratedFooter;
@property (nonatomic) SAUIDecoratedText decoratedValue;
@property (nonatomic) NSString footer;
@property (nonatomic) NSString value;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setValue:;
- (void)setFooter:;
- (id)encodedClassName;
- (id)footer;
- (id)value;
- (id)decoratedValue;
- (void)setDecoratedValue:;
- (id)decoratedFooter;
- (void)setDecoratedFooter:;
+ (id)specificAnswerItem;
+ (id)specificAnswerItemWithDictionary:context:;
@end
