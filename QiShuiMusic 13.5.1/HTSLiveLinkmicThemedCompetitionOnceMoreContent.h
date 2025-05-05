@interface HTSLiveLinkmicThemedCompetitionOnceMoreContent : IESLivePBBaseMessage
@property (nonatomic) IESLiveThemedCompetitionInfo info;
@property (nonatomic) BOOL hasInfo;
@property (nonatomic) q oldCompetitionId;
+ (id)descriptor;
@end
