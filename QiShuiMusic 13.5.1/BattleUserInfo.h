@interface BattleUserInfo : IESLivePBBaseMessage
@property (nonatomic) BattleUserInfo_BaseUserInfo user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) BattleConsecutiveRecordInfo consecutiveRecord;
@property (nonatomic) BOOL hasConsecutiveRecord;
@property (nonatomic) BattleStarActivityGrade grade;
@property (nonatomic) BOOL hasGrade;
@property (nonatomic) BattleStarActivityGradeChange gradeChange;
@property (nonatomic) BOOL hasGradeChange;
@property (nonatomic) NSString teamCoachScore;
@property (nonatomic) NSInteger pkRole;
@property (nonatomic) NSInteger pkResult;
@property (nonatomic) ActivityUser activityUser;
@property (nonatomic) BOOL hasActivityUser;
@property (nonatomic) q multiPkTeamId;
@property (nonatomic) NSString battleStartDescText;
@property (nonatomic) BattleUserInfo_UserImgFlipInfo userImgFlipInfo;
@property (nonatomic) BOOL hasUserImgFlipInfo;
+ (id)descriptor;
@end
