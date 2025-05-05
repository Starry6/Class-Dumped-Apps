@interface SAABPersonSnippet : SAUISnippet
@property (nonatomic) NSArray displayProperties;
@property (nonatomic) NSArray persons;
- (id)groupIdentifier;
- (void)setDisplayProperties:;
- (id)encodedClassName;
- (id)displayProperties;
- (id)persons;
- (void)setPersons:;
+ (id)personSnippet;
+ (id)personSnippetWithDictionary:context:;
@end
