@interface AWEIMPopupRedPacketAdditionalRewardData : MTLModel
@property (nonatomic) AWEIMPopupRedPacketStatusRewardData rewardInfo;
@property (nonatomic) NSString rewardPageSchema;
@property (nonatomic) q additionalRewardReceiveStatus;
@property (nonatomic) NSString additionalRewardDesc;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setRewardInfo:;
- (id)rewardInfo;
- (id)additionalRewardDesc;
- (long long)additionalRewardReceiveStatus;
- (id)rewardPageSchema;
- (void)setRewardPageSchema:;
- (void)setAdditionalRewardReceiveStatus:;
- (void)setAdditionalRewardDesc:;
- (void).cxx_destruct;
+ (id)rewardInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
