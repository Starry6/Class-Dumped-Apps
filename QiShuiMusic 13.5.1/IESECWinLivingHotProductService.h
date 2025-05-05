@interface IESECWinLivingHotProductService : NSObject
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) q productCount;
@property (nonatomic) q spreadTimeCount;
@property (nonatomic) q surplusProductsCount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (long long)spreadTimeCount;
- (id)dataService;
- (long long)productCount;
- (void)setProductCount:;
- (void)setSpreadTimeCount:;
- (void)setSurplusProductsCount:;
- (void)spreadProductList;
- (long long)surplusProductsCount;
- (id)initWithContext:;
- (void).cxx_destruct;
@end
