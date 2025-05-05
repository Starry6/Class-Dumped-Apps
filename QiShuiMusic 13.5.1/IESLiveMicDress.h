@interface IESLiveMicDress : IESLivePBBaseMessage
@property (nonatomic) IESLiveVoiceWave voiceDress;
@property (nonatomic) BOOL hasVoiceDress;
@property (nonatomic) IESLiveVoiceWave voiceWave;
@property (nonatomic) BOOL hasVoiceWave;
@property (nonatomic) IESLiveLinkmicBadge badge;
@property (nonatomic) BOOL hasBadge;
@property (nonatomic) IESLiveLinkmicCustomizedRandomEmoji customizedRandomEmoji;
@property (nonatomic) BOOL hasCustomizedRandomEmoji;
+ (id)descriptor;
@end
