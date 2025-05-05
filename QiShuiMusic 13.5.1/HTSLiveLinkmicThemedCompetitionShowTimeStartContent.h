@interface HTSLiveLinkmicThemedCompetitionShowTimeStartContent : IESLivePBBaseMessage
@property (nonatomic) q competitionId;
@property (nonatomic) IESLiveThemedCompetitionInfo info;
@property (nonatomic) BOOL hasInfo;
+ (id)descriptor;
@end
