@interface AWEECMallShopMomentFeedDataController : AWEListDataController
@property (nonatomic) q cursor;
@property (nonatomic) NSString entranceItemID;
@property (nonatomic) NSString entrancePage;
@property (nonatomic) NSString missItemID;
@property (nonatomic) NSString missToast;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)entrancePage;
- (id)entranceItemID;
- (void)requestNextPageWithParams:completion:;
- (void)fetchAwemeListWithParameters:completion:;
- (id)missItemID;
- (void)setMissItemID:;
- (id)missToast;
- (void)setMissToast:;
- (void)setEntranceItemID:;
- (void)setEntrancePage:;
- (long long)listDataCount;
- (long long)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
@end
