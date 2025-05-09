@interface VSVoiceResourceAsset : VSAssetBase
@property (nonatomic) NSDictionary voiceConfig;
@property (nonatomic) float rate;
@property (nonatomic) float pitch;
@property (nonatomic) float volume;
@property (nonatomic) NSDictionary vocalizerConfig;
@property (nonatomic) NSArray languages;
@property (nonatomic) NSArray resourceList;
@property (nonatomic) NSDictionary resourceMimeTypes;
@property (nonatomic) NSURL searchPathURL;
- (void)setRate:;
- (void)setPitch:;
- (float)volume;
- (id)resourceList;
- (void)setLanguages:;
- (void)setVolume:;
- (id)languages;
- (float)rate;
- (id)key;
- (float)pitch;
- (void)setResourceList:;
- (id)initWithCoder:;
- (void)setVoiceConfig:;
- (void)encodeWithCoder:;
- (id)defaultVoice;
- (void).cxx_destruct;
- (id)description;
- (void)setSearchPathURL:;
- (id)searchPathURL;
- (id)voiceConfig;
- (id)vocalizerConfig;
- (id)resourceMimeTypes;
- (id)_defaultVoices;
- (long long)defaultVoiceGender;
- (id)defaultVoiceNameForGender:;
- (long long)defaultVoiceType;
- (void)setVocalizerConfig:;
- (void)setResourceMimeTypes:;
+ (BOOL)supportsSecureCoding;
+ (id)resourceFromTrial:;
@end
