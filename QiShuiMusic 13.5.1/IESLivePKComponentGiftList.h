@interface IESLivePKComponentGiftList : IESLiveRevenueInteractPlayComponent
@property (nonatomic) NSArray syncGiftListTimeArray;
@property (nonatomic) BOOL shouldResetGiftListWhenFinished;
@property (nonatomic) BOOL hasSyncGiftList;
- (BOOL)hasSyncGiftList;
- (BOOL)shouldResetGiftListWhenFinished;
- (void)componentDidLoad;
- (void)componentFinished;
- (void)componentPunishing;
- (id)pkFeatures;
- (void)resetGiftListIfNeed;
- (void)setHasSyncGiftList:;
- (void)setShouldResetGiftListWhenFinished:;
- (void)setSyncGiftListTimeArray:;
- (id)syncGiftListTimeArray;
- (void).cxx_destruct;
- (void)clean;
@end
