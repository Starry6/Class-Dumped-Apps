@interface IESECWinLivingHotLatestInfoSectionController : IGListSectionController
@property (nonatomic) IESECServiceProxy<IESECWinLivingHotProductService> livingHotProductService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)livingHotProductService;
- (void)setLivingHotProductService:;
- (long long)numberOfItems;
- (id)initWithContext:;
- (void).cxx_destruct;
- (id)sizeForItemAtIndex:;
@end
