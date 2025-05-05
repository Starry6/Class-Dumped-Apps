@interface PaidLiveUIBaseConfig : IESLivePBBaseMessage
@property (nonatomic) NSInteger paidLiveType;
@property (nonatomic) HTSLiveImage paidLiveIcon;
@property (nonatomic) BOOL hasPaidLiveIcon;
@property (nonatomic) NSString paidLiveIconTitle;
@property (nonatomic) q duration;
@property (nonatomic) NSString noRightEndTitle;
@property (nonatomic) NSString noRightEndSubTitle;
@property (nonatomic) NSString hasRightEndTitle;
@property (nonatomic) NSString hasRightEndSubTitle;
@property (nonatomic) NSString paidConversionJumpURL;
@property (nonatomic) NSString panelSixJumpURL;
@property (nonatomic) NSString feedPagePurchaseBtnWord;
@property (nonatomic) NSString purchaseBtnWord;
@property (nonatomic) NSString imShareTopTitle;
@property (nonatomic) NSString imShareBottomTitle;
@property (nonatomic) NSString searchCardTopTitle;
@property (nonatomic) NSString panelFeedJumpURL;
@property (nonatomic) NSString panelImCardJumpURL;
@property (nonatomic) NSString panelInRoomJumpURL;
@property (nonatomic) NSString panelSearchCardJumpURL;
+ (id)descriptor;
@end
