@interface AWECardCouponListDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasRedeemed;
@property (nonatomic) NSString redeemedURL;
@property (nonatomic) Q filterStatus;
- (void)loadMoreWithCompletion:;
- (void)initFetchWithCompletion:;
- (id)redeemedURL;
- (void)setRedeemedURL:;
- (id)cursor;
- (id)init;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (void)setHasRedeemed:;
- (BOOL)hasRedeemed;
- (unsigned long long)filterStatus;
- (void)setFilterStatus:;
@end
