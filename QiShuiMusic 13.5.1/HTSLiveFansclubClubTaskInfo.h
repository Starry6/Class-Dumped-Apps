@interface HTSLiveFansclubClubTaskInfo : IESLivePBBaseMessage
@property (nonatomic) HTSLiveFansclubClubTaskInfo_GiftInfo startGift;
@property (nonatomic) BOOL hasStartGift;
@property (nonatomic) HTSLiveFansclubClubTaskInfo_GiftInfo cheerGift;
@property (nonatomic) BOOL hasCheerGift;
@property (nonatomic) HTSLiveClubTaskUserInfo sponsor;
@property (nonatomic) BOOL hasSponsor;
@property (nonatomic) NSInteger stage;
@property (nonatomic) HTSLiveGrowthTask task;
@property (nonatomic) BOOL hasTask;
@property (nonatomic) q remainIntimacy;
+ (id)descriptor;
@end
