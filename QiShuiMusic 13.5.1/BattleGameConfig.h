@interface BattleGameConfig : IESLivePBBaseMessage
@property (nonatomic) q gameId;
@property (nonatomic) q propId;
@property (nonatomic) NSString extra;
+ (id)descriptor;
@end
