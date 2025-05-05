@interface BattleRankUser : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q score;
@property (nonatomic) q rank;
@property (nonatomic) q gradeBuffScore;
+ (id)descriptor;
@end
