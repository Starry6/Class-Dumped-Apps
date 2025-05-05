@interface IESIMMusicKaraokeAudioModel : MTLModel
@property (nonatomic) double volumeLoudness;
@property (nonatomic) double volumePeak;
@property (nonatomic) q playURLStart;
@property (nonatomic) IESIMURLModel playURL;
@property (nonatomic) q playURLDuration;
@property (nonatomic) NSString localPath;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)playURLDuration;
- (long long)playURLStart;
- (void)setPlayURLDuration:;
- (void)setPlayURLStart:;
- (void)setVolumeLoudness:;
- (void)setVolumePeak:;
- (double)volumeLoudness;
- (double)volumePeak;
- (void).cxx_destruct;
- (id)localPath;
- (id)playURL;
- (void)setPlayURL:;
- (void)setLocalPath:;
+ (id)playURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@end
