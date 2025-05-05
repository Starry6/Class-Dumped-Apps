@interface BDXBridgeInspireSendRewardMethodParamModel : BDXBridgeModel
@property (nonatomic) BOOL send_reward;
@property (nonatomic) NSDictionary reward_extra;
@property (nonatomic) NSDictionary event_extra;
- (void)setEvent_extra:;
- (void)setSend_reward:;
- (id)event_extra;
- (id)reward_extra;
- (BOOL)send_reward;
- (void)setReward_extra:;
- (void).cxx_destruct;
+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;
@end
