@interface SAAnswerObject : SADomainObject
@property (nonatomic) NSArray lines;
@property (nonatomic) NSString title;
- (id)groupIdentifier;
- (void)setTitle:;
- (id)title;
- (id)encodedClassName;
- (id)lines;
- (void)setLines:;
+ (id)object;
+ (id)objectWithDictionary:context:;
@end
