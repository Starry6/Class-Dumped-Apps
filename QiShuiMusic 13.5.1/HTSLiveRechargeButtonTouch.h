@interface HTSLiveRechargeButtonTouch : IESLivePBBaseMessage
@property (nonatomic) HTSLiveText buttonText;
@property (nonatomic) BOOL hasButtonText;
@property (nonatomic) NSString schema;
+ (id)descriptor;
@end
