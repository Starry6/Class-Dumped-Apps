@interface AWELiteUGSendGoldLikeResponseModel : AWELiteBaseApiModel
@property (nonatomic) NSString toast;
@property (nonatomic) q balanceAmount;
@property (nonatomic) q giftAmount;
@property (nonatomic) q rewardAmount;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (void).cxx_destruct;
- (long long)balanceAmount;
- (void)setBalanceAmount:;
- (void)setToast:;
- (id)toast;
- (long long)giftAmount;
- (void)setGiftAmount:;
+ (id)JSONKeyPathsByPropertyKey;
@end
