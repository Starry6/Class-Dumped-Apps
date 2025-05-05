@interface IESLiveLinkMicProfitContributeShowGuestBattleContent : IESLivePBBaseMessage
@property (nonatomic) HTSLiveGuestBattleUserGradeInfo gradeInfo;
@property (nonatomic) BOOL hasGradeInfo;
+ (id)descriptor;
@end
