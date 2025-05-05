@interface HTSLiveGiftTip : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) HTSLiveImage prefixImage;
@property (nonatomic) BOOL hasPrefixImage;
@property (nonatomic) q remainingDuration;
@property (nonatomic) HTSLiveText remainingDurationSuffixText;
@property (nonatomic) BOOL hasRemainingDurationSuffixText;
@property (nonatomic) q countdownDeadlineTime;
+ (id)descriptor;
@end
