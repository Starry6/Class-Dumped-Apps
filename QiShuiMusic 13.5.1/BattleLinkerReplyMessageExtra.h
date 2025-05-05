@interface BattleLinkerReplyMessageExtra : IESLivePBBaseMessage
@property (nonatomic) q inviteType;
@property (nonatomic) NSInteger anchorAuthRole;
+ (id)descriptor;
@end
