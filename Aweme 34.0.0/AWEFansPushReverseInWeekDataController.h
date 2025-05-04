@interface AWEFansPushReverseInWeekDataController : AWEListDataController
@property (nonatomic) NSNumber cursor;
@property (nonatomic) BOOL hasMore;
@property (nonatomic) q total;
@property (nonatomic) AWEFansPushRewardModel rewardData;
@property (nonatomic) NSString topTitle;
@property (nonatomic) q urgeLiveCnt;
@property (nonatomic) q sendGiftCnt;
- (void)loadMoreWithCompletion:;
- (id)getParams;
- (id)rewardData;
- (void)setRewardData:;
- (long long)urgeLiveCnt;
- (void)setUrgeLiveCnt:;
- (long long)sendGiftCnt;
- (void)setSendGiftCnt:;
- (id)cursor;
- (id)init;
- (void)setHasMore:;
- (BOOL)hasMore;
- (void)setCursor:;
- (void).cxx_destruct;
- (void)refreshWithCompletion:;
- (long long)total;
- (void)setTotal:;
- (void)setTopTitle:;
- (id)topTitle;
@end
