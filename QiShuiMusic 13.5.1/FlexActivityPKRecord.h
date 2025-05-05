@interface FlexActivityPKRecord : IESLivePBBaseMessage
@property (nonatomic) q battleStartTime;
@property (nonatomic) NSInteger resultType;
@property (nonatomic) BattleUserInfo userInfo;
@property (nonatomic) BOOL hasUserInfo;
@property (nonatomic) NSString anchorScoreText;
@property (nonatomic) NSString oppositeScoreText;
+ (id)descriptor;
@end
