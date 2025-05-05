@interface AutoExchangeSettingPanelPopup : IESLivePBBaseMessage
@property (nonatomic) NSString mainText;
@property (nonatomic) NSString subText;
@property (nonatomic) NSString rewardText;
@property (nonatomic) NSString rewardIcon;
@property (nonatomic) NSString leftButtonText;
@property (nonatomic) NSString rightButtonText;
@property (nonatomic) BOOL isShow;
+ (id)descriptor;
@end
