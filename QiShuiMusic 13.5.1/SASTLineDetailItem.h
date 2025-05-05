@interface SASTLineDetailItem : AceObject
@property (nonatomic) SAUIDecoratedText title;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
+ (id)lineDetailItem;
+ (id)lineDetailItemWithDictionary:context:;
@end
