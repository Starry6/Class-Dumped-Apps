@interface HTSLiveProfitInteractionScoreAnchorInfo : IESLivePBBaseMessage
@property (nonatomic) NSString score;
@property (nonatomic) ProfitInteractionSetting interactionSetting;
@property (nonatomic) BOOL hasInteractionSetting;
@property (nonatomic) BOOL reachScoreDisplayThreshold;
+ (id)descriptor;
@end
