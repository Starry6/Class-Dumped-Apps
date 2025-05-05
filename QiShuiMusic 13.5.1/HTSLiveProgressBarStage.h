@interface HTSLiveProgressBarStage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSMutableArray iconTextArray;
@property (nonatomic) Q iconTextArray_Count;
@property (nonatomic) NSMutableArray bottomTextArray;
@property (nonatomic) Q bottomTextArray_Count;
@property (nonatomic) NSInteger rewardStatus;
@property (nonatomic) q currentValue;
@property (nonatomic) q targetValue;
@property (nonatomic) NSString jumpSchema;
+ (id)descriptor;
@end
