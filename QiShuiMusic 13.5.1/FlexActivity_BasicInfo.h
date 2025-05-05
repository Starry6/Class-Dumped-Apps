@interface FlexActivity_BasicInfo : IESLivePBBaseMessage
@property (nonatomic) NSString title;
@property (nonatomic) NSString description_p;
@property (nonatomic) NSString registerButtonText;
@property (nonatomic) NSString ruleURL;
@property (nonatomic) FlexActivity_Countdown countdown;
@property (nonatomic) BOOL hasCountdown;
+ (id)descriptor;
@end
