@interface SetAutoExchangeStatusResponse_ResponseData : IESLivePBBaseMessage
@property (nonatomic) NSInteger syncStatus;
@property (nonatomic) AutoExchangeSettingPanelPopup popup;
@property (nonatomic) BOOL hasPopup;
+ (id)descriptor;
@end
