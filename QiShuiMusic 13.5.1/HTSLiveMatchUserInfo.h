@interface HTSLiveMatchUserInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveTeamInfo userTeamInfo;
@property (nonatomic) BOOL hasUserTeamInfo;
@property (nonatomic) GPBInt64Int64Dictionary userQuizInfo;
@property (nonatomic) Q userQuizInfo_Count;
@property (nonatomic) BOOL isActivityAccount;
@property (nonatomic) BOOL needRetry;
+ (id)descriptor;
@end
