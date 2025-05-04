@interface AWEFansPushReverseUrgeRewardConfig : NSObject
@property (nonatomic) BOOL validConfig;
@property (nonatomic) Q urgeCount;
@property (nonatomic) Q giftCount;
@property (nonatomic) Q amount;
@property (nonatomic) NSArray rewardGiftsArray;
- (unsigned long long)giftCount;
- (void)setGiftCount:;
- (BOOL)validConfig;
- (void)setValidConfig:;
- (unsigned long long)urgeCount;
- (void)setUrgeCount:;
- (id)rewardGiftsArray;
- (void)setRewardGiftsArray:;
- (void).cxx_destruct;
- (unsigned long long)amount;
- (void)setAmount:;
@end
