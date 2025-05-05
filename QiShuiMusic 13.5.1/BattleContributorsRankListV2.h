@interface BattleContributorsRankListV2 : IESLivePBBaseMessage
@property (nonatomic) NSMutableDictionary anchorContributors;
@property (nonatomic) Q anchorContributors_Count;
@property (nonatomic) TeamTask teamTask;
@property (nonatomic) BOOL hasTeamTask;
@property (nonatomic) BattleSettings battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
@property (nonatomic) NSString loserOpenId;
@property (nonatomic) NSString loserUnionId;
+ (id)descriptor;
@end
