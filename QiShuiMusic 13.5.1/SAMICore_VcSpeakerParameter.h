@interface SAMICore_VcSpeakerParameter : NSObject
@property (nonatomic) r* speaker;
@property (nonatomic) SAMICore_AudioConfig inputAudioConfig;
@property (nonatomic) SAMICore_AudioConfig outputAudioConfig;
@property (nonatomic) BOOL enableSaveInputAudioData;
@property (nonatomic) BOOL enableSaveOutputAudioData;
@property (nonatomic) BOOL enableBackground;
@property (nonatomic) BOOL enablePlaying;
@property (nonatomic) NSInteger playerCacheTime;
- (int)playerCacheTime;
- (BOOL)enableBackground;
- (BOOL)enablePlaying;
- (BOOL)enableSaveInputAudioData;
- (BOOL)enableSaveOutputAudioData;
- (id)inputAudioConfig;
- (id)outputAudioConfig;
- (void)setEnableBackground:;
- (void)setEnablePlaying:;
- (void)setEnableSaveInputAudioData:;
- (void)setEnableSaveOutputAudioData:;
- (void)setInputAudioConfig:;
- (void)setOutputAudioConfig:;
- (void)setPlayerCacheTime:;
- (void)setSpeaker:;
- (id)speaker;
@end
