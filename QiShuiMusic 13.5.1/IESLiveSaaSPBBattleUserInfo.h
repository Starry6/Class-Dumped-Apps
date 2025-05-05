@interface IESLiveSaaSPBBattleUserInfo : GPBMessage
@property (nonatomic) IESLiveSaaSPBBattleUserInfo_BaseUserInfo user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) IESLiveSaaSPBBattleConsecutiveRecordInfo consecutiveRecord;
@property (nonatomic) BOOL hasConsecutiveRecord;
@property (nonatomic) IESLiveSaaSPBBattleStarActivityGrade grade;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) IESLiveSaaSPBBattleStarActivityGradeChange gradeChange;
@property (nonatomic) BOOL hasGradeChange;
@property (nonatomic) NSString teamCoachScore;
@property (nonatomic) NSInteger pkRole;
@property (nonatomic) NSInteger pkResult;
@property (nonatomic) q multiPkTeamId;
@property (nonatomic) NSString battleStartDescText;
+ (id)descriptor;
@end
