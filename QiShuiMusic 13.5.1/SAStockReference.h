@interface SAStockReference : SADomainObject
@property (nonatomic) NSString companyName;
@property (nonatomic) NSString symbol;
- (void)setSymbol:;
- (id)groupIdentifier;
- (id)symbol;
- (id)encodedClassName;
- (id)companyName;
- (void)setCompanyName:;
+ (id)reference;
+ (id)referenceWithDictionary:context:;
@end
