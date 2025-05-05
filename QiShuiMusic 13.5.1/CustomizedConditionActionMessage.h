@interface CustomizedConditionActionMessage : IESLivePBBaseMessage
@property (nonatomic) q conditionType;
@property (nonatomic) NSString actionKey;
@property (nonatomic) BOOL meetCondition;
@property (nonatomic) q timestamp;
@property (nonatomic) q roomId;
@property (nonatomic) q userId;
@property (nonatomic) NSInteger appId;
@property (nonatomic) q deviceId;
+ (id)descriptor;
@end
