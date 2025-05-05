@interface IESECWinOrderSectionController : IGListSectionController
@property (nonatomic) IESECServiceProxy<IESECWinDataService> dataService;
@property (nonatomic) FBKVOController kvoCtrl;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)kvoCtrl;
- (void)setDataService:;
- (id)cellForItemAtIndex:;
- (id)dataService;
- (void)didUpdateToObject:;
- (void)setKvoCtrl:;
- (long long)numberOfItems;
- (id)initWithContext:;
- (void).cxx_destruct;
- (void)addObserver;
- (id)currentCell;
- (id)sizeForItemAtIndex:;
@end
