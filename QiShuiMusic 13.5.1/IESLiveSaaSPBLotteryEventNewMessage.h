@interface IESLiveSaaSPBLotteryEventNewMessage : GPBMessage
@property (nonatomic) IESLiveSaaSPBCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) q lotteryId;
@property (nonatomic) NSInteger lotteryStatus;
@property (nonatomic) q lotteryStartTime;
@property (nonatomic) q lotteryDrawTime;
@property (nonatomic) q lotteryCurrentTime;
@property (nonatomic) NSString rulePageScheme;
@property (nonatomic) q prizeType;
@property (nonatomic) NSString lotteryAuditFailureReason;
@property (nonatomic) GPBInt32Array conditionsArray;
@property (nonatomic) Q conditionsArray_Count;
+ (id)descriptor;
@end
