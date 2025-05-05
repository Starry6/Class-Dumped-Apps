@interface BUAudioSessionHandler : NSObject
@property (nonatomic) BOOL forMuteBlock;
@property (nonatomic) BOOL playerMute;
@property (nonatomic) BOOL activeOtherAudio;
@property (nonatomic) BOOL allowModifyAudioSessionSetting;
- (BOOL)activeOtherAudio;
- (BOOL)allowModifyAudioSessionSetting;
- (BOOL)forMuteBlock;
- (BOOL)hasHeadset;
- (void)inner_AudioPlayingWithMute:;
- (void)interruptOtherAudioPlayingWithMute:;
- (BOOL)playerMute;
- (void)resetAudioSessionCategoryToOriginStatus;
- (void)setActiveOtherAudio:;
- (void)setAllowModifyAudioSessionSetting:;
- (void)setForMuteBlock:;
- (void)setPlayerMute:;
- (id)init;
@end
