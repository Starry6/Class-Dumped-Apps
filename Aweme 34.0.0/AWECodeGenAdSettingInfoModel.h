@interface AWECodeGenAdSettingInfoModel : AWEBaseDataModel
@property (nonatomic) NSArray midAdsIndexArray;
@property (nonatomic) NSArray rewardedAdsIndexArray;
@property (nonatomic) NSString bizExtra;
- (id)bizExtra;
- (void)setBizExtra:;
- (id)midAdsIndexArray;
- (id)rewardedAdsIndexArray;
- (void)setMidAdsIndexArray:;
- (void)setRewardedAdsIndexArray:;
- (void).cxx_destruct;
+ (id)JSONKeyPathsByPropertyKey;
@end
