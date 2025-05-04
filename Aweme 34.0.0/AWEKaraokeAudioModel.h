@interface AWEKaraokeAudioModel : AWEBaseDataModel
@property (nonatomic) double volumeLoudness;
@property (nonatomic) double volumePeak;
@property (nonatomic) NSInteger playURLStart;
@property (nonatomic) AWENewURLModel playURL;
@property (nonatomic) NSInteger playURLDuration;
- (void)setVolumeLoudness:;
- (void)setVolumePeak:;
- (void)setPlayURLStart:;
- (void)setPlayURLDuration:;
- (double)volumeLoudness;
- (double)volumePeak;
- (int)playURLStart;
- (int)playURLDuration;
- (void).cxx_destruct;
- (id)playURL;
- (void)setPlayURL:;
+ (id)JSONKeyPathsByPropertyKey;
@end
