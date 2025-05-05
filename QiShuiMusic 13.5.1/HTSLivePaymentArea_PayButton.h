@interface HTSLivePaymentArea_PayButton : IESLivePBBaseMessage
@property (nonatomic) NSString content;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) NSString jumpSchema;
@property (nonatomic) NSInteger avilable;
@property (nonatomic) NSString copyWriting;
@property (nonatomic) NSInteger clickType;
+ (id)descriptor;
@end
