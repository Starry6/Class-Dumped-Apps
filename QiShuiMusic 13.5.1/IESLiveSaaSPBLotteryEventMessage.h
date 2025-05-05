@interface IESLiveSaaSPBLotteryEventMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q lotteryId;
@property (nonatomic) NSInteger lotteryStatus;
@property (nonatomic) q lotteryStartTime;
@property (nonatomic) q lotteryDrawTime;
@property (nonatomic) q lotteryCurrentTime;
@property (nonatomic) NSString rulePageScheme;
+ (id)descriptor;
@end
