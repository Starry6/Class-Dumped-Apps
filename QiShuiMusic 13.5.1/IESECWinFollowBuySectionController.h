@interface IESECWinFollowBuySectionController : IESECWinListKitCellController
@property (nonatomic) FBKVOController kvoCtrl;
@property (nonatomic) IESECWinFollowBuyObject object;
@property (nonatomic) IESECWinFollowBuyCell followBuyCell;
@property (nonatomic) IESECServiceProxy<IESECWinSplitService> splitService;
@property (nonatomic) IESECServiceProxy<IESECWinMainScrollService> scrollService;
- (id)kvoCtrl;
- (id)configWithCell:;
- (id)cellForItemAtIndex:;
- (void)didUpdateToObject:;
- (id)followBuyCell;
- (id)scrollService;
- (void)setFollowBuyCell:;
- (void)setKvoCtrl:;
- (void)setScrollService:;
- (void)setSplitService:;
- (id)splitService;
- (void)trackShow;
- (void)setObject:;
- (long long)numberOfItems;
- (void)scrollViewDidScroll;
- (void).cxx_destruct;
- (id)object;
- (void)addObserver;
- (id)sizeForItemAtIndex:;
@end
