@interface IESECWinFollowResponse : IESECBaseApiModel
@property (nonatomic) NSString followSuccessMsg;
@property (nonatomic) q followStatus;
@property (nonatomic) IESECRelationActivityDynamicComponentModel module;
- (long long)followStatus;
- (id)followSuccessMsg;
- (void)setFollowStatus:;
- (void)setFollowSuccessMsg:;
- (id)module;
- (void).cxx_destruct;
- (void)setModule:;
+ (id)JSONKeyPathsByPropertyKey;
@end
