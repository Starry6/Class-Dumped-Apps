@interface AWEAudioModel : AWEBaseApiModel
@property (nonatomic) AWEHumanEnhancedAudioModel humanEnhancedAudio;
@property (nonatomic) BOOL defaultEnableOriginSound;
@property (nonatomic) NSArray originalSoundInfos;
@property (nonatomic) NSString audioWave;
- (id)audioWave;
- (id)humanEnhancedAudio;
- (void)setHumanEnhancedAudio:;
- (BOOL)defaultEnableOriginSound;
- (id)originalSoundInfos;
- (void)setAudioWave:;
- (void).cxx_destruct;
+ (id)humanEnhancedAudioJSONTransformer;
+ (id)originalSoundInfosJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
