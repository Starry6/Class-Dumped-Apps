@interface RankListInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveUser userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) q score;
@property (nonatomic) NSInteger onlineStatus;
+ (id)descriptor;
@end
