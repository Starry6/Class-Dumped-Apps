@interface BURewardedVideoModel : BUInterfaceBaseObject
@property (nonatomic) BURewardedVideoModelMediation mediation;
@property (nonatomic) BURewardedVideoModel iteration;
@property (nonatomic) NSString userId;
@property (nonatomic) NSString extra;
@property (nonatomic) NSString rewardName;
@property (nonatomic) q rewardAmount;
@property (nonatomic) q rewardType;
@property (nonatomic) float rewardPropose;
@property (nonatomic) NSArray advancedRewardTypes;
@property (nonatomic) BOOL allowPlayAgain;
- (id)mediation;
- (id)init;
- (void).cxx_destruct;
- (void)setIteration:;
- (id)iteration;
@end
