@interface IESLiveAdventurePairInfo : IESLivePBBaseMessage
@property (nonatomic) q pairId;
@property (nonatomic) IESLiveAdventureUserInfo fromUser;
@property (nonatomic) BOOL hasFromUser;
@property (nonatomic) IESLiveAdventureUserInfo toUser;
@property (nonatomic) BOOL hasToUser;
@property (nonatomic) q score;
@property (nonatomic) q nextStageScore;
@property (nonatomic) q stageId;
@property (nonatomic) IESLiveAdventureStageInfo stageInfo;
@property (nonatomic) BOOL hasStageInfo;
@property (nonatomic) NSInteger pairStatus;
@property (nonatomic) NSInteger callStatus;
@property (nonatomic) q callerUserId;
@property (nonatomic) NSString pairIdStr;
+ (id)descriptor;
@end
