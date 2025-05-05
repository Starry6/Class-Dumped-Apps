@interface SAStockAdd : SADomainCommand
@property (nonatomic) NSArray stocks;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (id)stocks;
- (void)setStocks:;
+ (id)add;
+ (id)addWithDictionary:context:;
@end
