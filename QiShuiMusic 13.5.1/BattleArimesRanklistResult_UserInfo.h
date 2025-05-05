@interface BattleArimesRanklistResult_UserInfo : IESLivePBBaseMessage
@property (nonatomic) q score;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) NSMutableArray tagsArray;
@property (nonatomic) Q tagsArray_Count;
@property (nonatomic) NSString scoreBlurText;
@property (nonatomic) NSInteger rankStatus;
@property (nonatomic) NSString subDes;
@property (nonatomic) NSString appName;
+ (id)descriptor;
@end
