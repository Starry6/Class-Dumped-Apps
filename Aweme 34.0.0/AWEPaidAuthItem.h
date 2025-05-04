@interface AWEPaidAuthItem : NSObject
@property (nonatomic) Q authItemType;
@property (nonatomic) q paymentType;
@property (nonatomic) AWEPaidAuthItem nextAuthItem;
@property (nonatomic) NSDictionary extraInfo;
@property (nonatomic) AWEPaidAuthRewardChargeInfo rewardChargeInfo;
@property (nonatomic) AWEPaidAuthPaymentChargeInfo paymentChargeInfo;
- (id)paymentChargeInfo;
- (void)setPaymentChargeInfo:;
- (unsigned long long)authItemType;
- (void)setAuthItemType:;
- (id)nextAuthItem;
- (void)setNextAuthItem:;
- (id)rewardChargeInfo;
- (void)setRewardChargeInfo:;
- (long long)paymentType;
- (void)setPaymentType:;
- (void).cxx_destruct;
- (id)toDictionary;
- (id)extraInfo;
- (void)setExtraInfo:;
@end
