@interface HTSLiveVSPremiereToast : IESLivePBBaseMessage
@property (nonatomic) NSString leftTopToast;
@property (nonatomic) NSString playerToast;
@property (nonatomic) NSString playerTopToast;
@property (nonatomic) HTSLiveImage icon;
@property (nonatomic) BOOL hasIcon;
+ (id)descriptor;
@end
