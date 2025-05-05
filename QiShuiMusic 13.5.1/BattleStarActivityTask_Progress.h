@interface BattleStarActivityTask_Progress : IESLivePBBaseMessage
@property (nonatomic) q current;
@property (nonatomic) q target;
+ (id)descriptor;
@end
