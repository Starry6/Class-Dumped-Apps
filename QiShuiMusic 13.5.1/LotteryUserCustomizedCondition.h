@interface LotteryUserCustomizedCondition : IESLivePBBaseMessage
@property (nonatomic) NSInteger conditionType;
@property (nonatomic) BOOL canParticipate;
@property (nonatomic) NSString rejectDesc;
@property (nonatomic) BOOL hasMeetCondition;
@property (nonatomic) NSString guideText;
@property (nonatomic) NSString guideSchema;
+ (id)descriptor;
@end
