@interface HTSLiveMonkeyDataRedis : IESLivePBBaseMessage
@property (nonatomic) q time;
@property (nonatomic) q liveId;
@property (nonatomic) q roomId;
@property (nonatomic) NSString anchorOpenId;
@property (nonatomic) NSString openId;
@property (nonatomic) q giftId;
@property (nonatomic) q seed;
@property (nonatomic) q score;
@property (nonatomic) NSString token;
@property (nonatomic) NSString unionId;
@property (nonatomic) NSString anchorUnionId;
+ (id)descriptor;
@end
