@interface IESECWinLiveTabAnchorBottomSectionController : IGListSectionController
@property (nonatomic) IESECServiceProxy<IESECWinTabService> tabService;
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) IESECServiceProxy<IESECWinCategoryService> categoryService;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setDataService:;
- (id)categoryService;
- (id)cellForItemAtIndex:;
- (id)dataService;
- (void)didUpdateToObject:;
- (void)setCategoryService:;
- (void)setTabService:;
- (id)tabService;
- (id)trackParams;
- (void)trackWithEventName:trackParams:once:btmID:;
- (long long)numberOfItems;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:;
- (id)sizeForItemAtIndex:;
@end
