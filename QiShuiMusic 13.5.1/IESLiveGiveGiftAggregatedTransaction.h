@interface IESLiveGiveGiftAggregatedTransaction : NSObject
@property (nonatomic) q sendCnt;
@property (nonatomic) q sendGift;
@property (nonatomic) q sendMoney;
@property (nonatomic) NSMutableSet transactions;
@property (nonatomic) NSString giftShowFrom;
- (long long)sendCnt;
- (void)dequeueTransaction:;
- (void)enqueueTransaction:;
- (id)giftShowFrom;
- (long long)sendGift;
- (long long)sendMoney;
- (void)setGiftShowFrom:;
- (void)setSendCnt:;
- (void)setSendGift:;
- (void)setSendMoney:;
- (id)init;
- (BOOL)isEmpty;
- (void)setTransactions:;
- (id)transactions;
- (void).cxx_destruct;
@end
