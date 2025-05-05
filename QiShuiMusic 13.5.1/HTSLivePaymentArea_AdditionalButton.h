@interface HTSLivePaymentArea_AdditionalButton : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSInteger avilable;
@property (nonatomic) NSString copyWriting;
+ (id)descriptor;
@end
