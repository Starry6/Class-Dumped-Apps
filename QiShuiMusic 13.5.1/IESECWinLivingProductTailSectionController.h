@interface IESECWinLivingProductTailSectionController : IGListSectionController
@property (nonatomic) IESECServiceProxy<IESECWinTabService> tabService;
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECWinLivingHotProductService> livingHotProductService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (id)cellForItemAtIndex:;
- (id)dataService;
- (void)didUpdateToObject:;
- (id)livingHotProductService;
- (void)setLivingHotProductService:;
- (void)setTabService:;
- (id)tabService;
- (long long)numberOfItems;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
