@interface BattlePanel : IESLivePBBaseMessage
@property (nonatomic) PanelTitle panelTitle;
@property (nonatomic) BOOL hasPanelTitle;
@property (nonatomic) PanelBtn panelBtn;
@property (nonatomic) BOOL hasPanelBtn;
@property (nonatomic) BOOL isSelfData;
@property (nonatomic) q selfOptId;
@property (nonatomic) BattleSelfData selfData;
@property (nonatomic) BOOL hasSelfData;
@property (nonatomic) NSInteger battlePanelType;
@property (nonatomic) BattleShellConfig shellConfig;
@property (nonatomic) BOOL hasShellConfig;
@property (nonatomic) BOOL isForbidden;
@property (nonatomic) NSString forbiddenText;
@property (nonatomic) NSString tagText;
@property (nonatomic) SpecifyGiftConfig specifyGiftConfig;
@property (nonatomic) BOOL hasSpecifyGiftConfig;
@property (nonatomic) CustomConfig customConfig;
@property (nonatomic) BOOL hasCustomConfig;
@property (nonatomic) HTSLiveImage backImg;
@property (nonatomic) BOOL hasBackImg;
@property (nonatomic) ProfitGameConfig gameConfig;
@property (nonatomic) BOOL hasGameConfig;
+ (id)descriptor;
@end
