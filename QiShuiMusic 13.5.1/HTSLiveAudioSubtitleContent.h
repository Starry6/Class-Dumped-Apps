@interface HTSLiveAudioSubtitleContent : IESLivePBBaseMessage
@property (nonatomic) q audioSubtitleValue;
@property (nonatomic) HTSLiveLinkmicSubtitleStatus linkmicSubtitleStatus;
@property (nonatomic) BOOL hasLinkmicSubtitleStatus;
+ (id)descriptor;
@end
