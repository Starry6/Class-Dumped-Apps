@interface VEAudioVoiceDetectionConfig : IESMMAudioEffectConfig
@property (nonatomic) NSString modelPath;
- (void)setupDefaultValues;
- (id)toDicInfo;
- (void)setModelPath:;
- (void).cxx_destruct;
- (id)modelPath;
@end
