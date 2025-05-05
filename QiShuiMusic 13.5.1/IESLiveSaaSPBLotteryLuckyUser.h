@interface IESLiveSaaSPBLotteryLuckyUser : GPBMessage
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
@property (nonatomic) BOOL useNewAward;
+ (id)descriptor;
@end
