@interface HTSLiveBattleResult : IESLivePBBaseMessage
@property (nonatomic) NSString mixGuestID;
@property (nonatomic) NSString guestOpenId;
@property (nonatomic) NSString score;
@property (nonatomic) q rank;
@property (nonatomic) NSString scoreFuzzy;
@property (nonatomic) HTSLiveGuestBattleContributors contributors;
@property (nonatomic) BOOL hasContributors;
@property (nonatomic) HTSLiveLinkmicQuickInteract quickInteract;
@property (nonatomic) BOOL hasQuickInteract;
@property (nonatomic) HTSLiveGuestBattleUserGradeInfo crownInfo;
@property (nonatomic) BOOL hasCrownInfo;
@property (nonatomic) NSString nickname;
@property (nonatomic) q scoreNum;
@property (nonatomic) NSInteger role;
@property (nonatomic) NSString guestIdStr;
@property (nonatomic) BOOL forcePlay;
@property (nonatomic) HTSLiveUser user;
@property (nonatomic) BOOL hasUser;
@property (nonatomic) q realScore;
- (id)mixGuestID;
+ (id)descriptor;
@end
