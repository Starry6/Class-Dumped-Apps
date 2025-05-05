@interface BDUGLuckyADRVInfoModel : BDUGLuckyJSONModel
@property (nonatomic) q rewardAmount;
@property (nonatomic) NSString rewardType;
@property (nonatomic) NSString rewardName;
@property (nonatomic) NSString rewardPopupIcon;
- (id)rewardPopupIcon;
- (long long)rewardAmount;
- (id)rewardName;
- (id)rewardType;
- (void)setRewardAmount:;
- (void)setRewardName:;
- (void)setRewardPopupIcon:;
- (void)setRewardType:;
- (void).cxx_destruct;
@end
