@interface IESLiveSaaSPBLotteryUserCondition : GPBMessage
@property (nonatomic) BOOL isWatching;
@property (nonatomic) BOOL hasCommand;
@property (nonatomic) BOOL hasFollow;
@property (nonatomic) BOOL isFansclubMember;
@property (nonatomic) BOOL hasGift;
@property (nonatomic) q fansLevel;
@property (nonatomic) BOOL fansclubStatusActive;
@property (nonatomic) BOOL hasShared;
@property (nonatomic) BOOL hasHelpWish;
@property (nonatomic) BOOL hasActivated;
@property (nonatomic) BOOL isSubscribeMember;
+ (id)descriptor;
@end
