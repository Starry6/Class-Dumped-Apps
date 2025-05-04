@interface AWEMusicKaraokeAudioModel : MTLModel
@property (nonatomic) double volumeLoudness;
@property (nonatomic) double volumePeak;
@property (nonatomic) q playURLStart;
@property (nonatomic) AWEURLModel playURL;
@property (nonatomic) q playURLDuration;
@property (nonatomic) NSString localPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setVolumeLoudness:;
- (void)setVolumePeak:;
- (void)setPlayURLStart:;
- (void)setPlayURLDuration:;
- (double)volumeLoudness;
- (double)volumePeak;
- (long long)playURLStart;
- (long long)playURLDuration;
- (void).cxx_destruct;
- (id)localPath;
- (id)playURL;
- (void)setPlayURL:;
- (void)setLocalPath:;
+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
