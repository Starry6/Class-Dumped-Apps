@interface HTSLiveLinkmicPlaymodeMessage : IESLivePBBaseMessage
@property (nonatomic) HTSLiveCommon common;
@property (nonatomic) BOOL hasCommon;
@property (nonatomic) HTSLiveLinkmicSubtitleStatus linkmicSubtitleStatus;
@property (nonatomic) BOOL hasLinkmicSubtitleStatus;
+ (id)descriptor;
@end
