@interface HTSLiveGiftPanelTouchResponse_Data : IESLivePBBaseMessage
@property (nonatomic) HTSLiveRechargeButtonTouch rechargeButtonTouch;
@property (nonatomic) BOOL hasRechargeButtonTouch;
@property (nonatomic) NSMutableDictionary extra;
@property (nonatomic) Q extra_Count;
+ (id)descriptor;
@end
