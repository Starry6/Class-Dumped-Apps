@interface SAStockSnippet : SAUISnippet
@property (nonatomic) SAUIAppPunchOut appPunchOut;
@property (nonatomic) NSArray stocks;
- (id)groupIdentifier;
- (id)encodedClassName;
- (id)stocks;
- (void)setStocks:;
- (id)appPunchOut;
- (void)setAppPunchOut:;
+ (id)snippet;
+ (id)snippetWithDictionary:context:;
@end
