@interface HTSLivePaymentArea : IESLivePBBaseMessage
@property (nonatomic) HTSLivePaymentArea_PayButton payButton;
@property (nonatomic) BOOL hasPayButton;
@property (nonatomic) HTSLivePaymentArea_AdditionalButton additionalButton;
@property (nonatomic) BOOL hasAdditionalButton;
+ (id)descriptor;
@end
