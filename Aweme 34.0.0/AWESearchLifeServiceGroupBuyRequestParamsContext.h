@interface AWESearchLifeServiceGroupBuyRequestParamsContext : AWESearchLifeServiceRequestParamsBaseContext
@property (nonatomic) BOOL isExecuteEmptyQuerySearch;
@property (nonatomic) BOOL isLife7Page;
@property (nonatomic) BOOL isPartShowStatus;
@property (nonatomic) BOOL shouldReadClientHistoryNeedStore;
@property (nonatomic) NSDictionary commonOnceParams;
@property (nonatomic) NSDictionary commonPassWithFilterParams;
@property (nonatomic) NSDictionary commonAllTimeParams;
- (void)updateWithRouterModel:;
- (id)initWithRouterModel:extraLogParams:;
- (BOOL)isPartShowStatus;
- (void)setIsPartShowStatus:;
- (BOOL)isExecuteEmptyQuerySearch;
- (BOOL)isLife7Page;
- (id)commonOnceParams;
- (id)commonPassWithFilterParams;
- (id)commonAllTimeParams;
- (void)setIsExecuteEmptyQuerySearch:;
- (void)setIsLife7Page:;
- (void)setCommonOnceParams:;
- (void)setCommonPassWithFilterParams:;
- (void)setCommonAllTimeParams:;
- (void)setShouldReadClientHistoryNeedStore:;
- (BOOL)isForceInGrouponTab;
- (BOOL)shouldReadClientHistoryNeedStore;
- (void).cxx_destruct;
@end
