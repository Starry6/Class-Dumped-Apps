@interface HTSLiveBattleToastMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) NSString content;
@property (nonatomic) NSInteger notifyType;
@property (nonatomic) q duration;
@property (nonatomic) q battleId;
@property (nonatomic) HTSLiveBattleToastMessage_UIConfig uiConfig;
@property (nonatomic) BOOL hasUiConfig;
+ (id)descriptor;
@end
