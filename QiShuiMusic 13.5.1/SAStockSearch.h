@interface SAStockSearch : SADomainCommand
@property (nonatomic) NSArray stockReferences;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)stockReferences;
- (void)setStockReferences:;
+ (id)search;
+ (id)searchWithDictionary:context:;
@end
