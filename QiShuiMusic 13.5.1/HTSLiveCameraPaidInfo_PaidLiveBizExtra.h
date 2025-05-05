@interface HTSLiveCameraPaidInfo_PaidLiveBizExtra : IESLivePBBaseMessage
@property (nonatomic) NSString ticketPanelSixJumpURL;
@property (nonatomic) BOOL isReplay;
@property (nonatomic) NSString paidConversionJumpURL;
+ (id)descriptor;
@end
