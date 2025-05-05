@interface HTSLiveLinkMicEnterNoticeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveBattleSettings battleSettings;
@property (nonatomic) BOOL hasBattleSettings;
+ (id)descriptor;
@end
