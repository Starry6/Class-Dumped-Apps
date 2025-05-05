@interface SKProductsResponse : NSObject
@property (nonatomic) NSArray products;
@property (nonatomic) NSArray invalidProductIdentifiers;
- (id)init;
- (id)products;
- (void)_setProducts:;
- (void).cxx_destruct;
- (id)invalidProductIdentifiers;
- (void)_setInvalidIdentifiers:;
@end
