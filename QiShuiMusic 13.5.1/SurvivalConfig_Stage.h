@interface SurvivalConfig_Stage : IESLivePBBaseMessage
@property (nonatomic) q duration;
@property (nonatomic) BattleTitleConfig titleConfig;
@property (nonatomic) BOOL hasTitleConfig;
+ (id)descriptor;
@end
