@interface HTSLiveGiftTouchMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString scene;
@property (nonatomic) HTSLiveGiftPanelTopBar giftPanelTopbar;
@property (nonatomic) BOOL hasGiftPanelTopbar;
@property (nonatomic) HTSLiveComboTrayInfo comboTrayInfo;
@property (nonatomic) BOOL hasComboTrayInfo;
@property (nonatomic) q nowMillis;
@property (nonatomic) NSInteger displayPosition;
@property (nonatomic) HTSLiveUser toUser;
@property (nonatomic) BOOL hasToUser;
+ (id)descriptor;
@end
