@interface HTSLiveLotteryEventNewMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
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
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
@property (nonatomic) BOOL useNewDrawInteraction;
@property (nonatomic) q prizeCount;
@property (nonatomic) q luckyCount;
+ (id)descriptor;
@end
