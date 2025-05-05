@interface SAUIDecoratedText : AceObject
@property (nonatomic) NSString ducId;
@property (nonatomic) NSArray regions;
@property (nonatomic) NSString text;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)regions;
- (id)groupIdentifier;
- (void)setText:;
- (void)setRegions:;
- (id)encodedClassName;
- (id)text;
- (id)ducId;
- (void)setDucId:;
+ (id)decoratedText;
+ (id)decoratedTextWithDictionary:context:;
@end
