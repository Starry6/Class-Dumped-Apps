@interface LotteryLuckyUser : IESLivePBBaseMessage
@property (nonatomic) q luckyId;
@property (nonatomic) q lotteryId;
@property (nonatomic) q roomId;
@property (nonatomic) NSString userOpenId;
@property (nonatomic) NSString userUnionId;
@property (nonatomic) NSString userName;
@property (nonatomic) NSString avatarURL;
@property (nonatomic) q grantCount;
@property (nonatomic) NSString userExtraInfo;
@property (nonatomic) NSString orderInfo;
@property (nonatomic) NSString secUserId;
@property (nonatomic) q prizeType;
@property (nonatomic) NSString prizeName;
@property (nonatomic) q expireTime;
@property (nonatomic) NSMutableArray voucherPrizeListArray;
@property (nonatomic) Q voucherPrizeListArray_Count;
@property (nonatomic) BOOL useNewAward;
@property (nonatomic) LotteryLuckyUser_Award award;
@property (nonatomic) BOOL hasAward;
+ (id)descriptor;
@end
