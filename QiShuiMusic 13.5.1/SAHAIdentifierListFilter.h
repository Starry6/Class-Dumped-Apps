@interface SAHAIdentifierListFilter : SAHAFilter
@property (nonatomic) NSArray identifiers;
- (id)groupIdentifier;
- (id)identifiers;
- (id)encodedClassName;
- (void)setIdentifiers:;
+ (id)identifierListFilter;
+ (id)identifierListFilterWithDictionary:context:;
@end
