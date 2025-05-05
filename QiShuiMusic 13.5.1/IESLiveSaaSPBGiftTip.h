@interface IESLiveSaaSPBGiftTip : GPBMessage
@property (nonatomic) IESLiveSaaSPBText displayText;
@property (nonatomic) BOOL hasDisplayText;
@property (nonatomic) NSString backgroundColor;
@property (nonatomic) IESLiveSaaSPBImage prefixImage;
@property (nonatomic) BOOL hasPrefixImage;
@property (nonatomic) q remainingDuration;
@property (nonatomic) IESLiveSaaSPBText remainingDurationSuffixText;
@property (nonatomic) BOOL hasRemainingDurationSuffixText;
@property (nonatomic) q countdownDeadlineTime;
+ (id)descriptor;
@end
