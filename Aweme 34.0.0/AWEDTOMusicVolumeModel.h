@interface AWEDTOMusicVolumeModel : MTLModel
@property (nonatomic) BOOL voiceOn;
@property (nonatomic) double voiceVolume;
@property (nonatomic) double bgmVolume;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVoiceOn:;
- (void)setBgmVolume:;
- (BOOL)voiceOn;
- (double)bgmVolume;
- (id)init;
- (void)setVoiceVolume:;
- (double)voiceVolume;
+ (id)JSONKeyPathsByPropertyKey;
@end
