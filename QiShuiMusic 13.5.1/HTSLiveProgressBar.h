@interface HTSLiveProgressBar : IESLivePBBaseMessage
@property (nonatomic) NSString currentValue;
@property (nonatomic) NSString targetValue;
@property (nonatomic) q progressRate;
@property (nonatomic) NSString color;
+ (id)descriptor;
@end
