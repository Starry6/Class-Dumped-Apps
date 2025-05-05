@interface HTSLiveUser_UserStats : IESLivePBBaseMessage
@property (nonatomic) q id_p;
@property (nonatomic) NSString idStr;
@property (nonatomic) q followingCount;
@property (nonatomic) q followerCount;
@property (nonatomic) q recordCount;
@property (nonatomic) q totalDuration;
@property (nonatomic) q dailyFanTicketCount;
@property (nonatomic) q dailyIncome;
@property (nonatomic) q itemCount;
@property (nonatomic) q favoriteItemCount;
@property (nonatomic) q diamondCount;
@property (nonatomic) q diamondConsumedCount;
@property (nonatomic) q tuwenItemCount;
+ (id)descriptor;
@end
