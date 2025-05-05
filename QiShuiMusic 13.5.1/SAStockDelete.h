@interface SAStockDelete : SADomainCommand
@property (nonatomic) NSArray stocks;
- (id)groupIdentifier;
- (BOOL)requiresResponse;
- (id)encodedClassName;
- (BOOL)mutatingCommand;
- (id)stocks;
- (void)setStocks:;
@end
