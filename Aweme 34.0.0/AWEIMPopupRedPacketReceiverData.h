@interface AWEIMPopupRedPacketReceiverData : MTLModel
@property (nonatomic) NSString avatarURL;
@property (nonatomic) NSString userName;
@property (nonatomic) AWEIMPopupRedPacketStatusRewardData rewardInfo;
@property (nonatomic) AWEIMPopupRedPacketAdditionalRewardData additionalReward;
@property (nonatomic) NSString applyTime;
@property (nonatomic) NSString profileSchema;
@property (nonatomic) BOOL isBestLucky;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)avatarURL;
- (void)setAvatarURL:;
- (void)setRewardInfo:;
- (id)rewardInfo;
- (id)additionalReward;
- (void)setAdditionalReward:;
- (id)applyTime;
- (void)setApplyTime:;
- (id)profileSchema;
- (void)setProfileSchema:;
- (BOOL)isBestLucky;
- (void)setIsBestLucky:;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserName:;
+ (id)rewardInfoJSONTransformer;
+ (id)additionalRewardJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
