@interface AWELuckyCatRewardInfoModel : MTLModel
@property (nonatomic) NSString rewardDesc;
@property (nonatomic) NSString walletIcon;
@property (nonatomic) q rewardType;
@property (nonatomic) q rewardAmount;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)rewardAmount;
- (void)setRewardAmount:;
- (void)setRewardType:;
- (long long)rewardType;
- (id)rewardDesc;
- (void)setRewardDesc:;
- (id)walletIcon;
- (void)setWalletIcon:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
