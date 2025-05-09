@interface IESLivePrefSampleInfo : NSObject
@property (nonatomic) IESLivePrefSampleCpuInfo cpu;
@property (nonatomic) IESLivePrefSampleMemoryInfo pss;
@property (nonatomic) IESLivePrefSampleStreamInfo stream;
@property (nonatomic) IESLivePrefSampleThermalInfo thermal;
@property (nonatomic) IESLivePrefSampleBatteryInfo battery;
@property (nonatomic) IESLivePrefSampleNetInfo net;
@property (nonatomic) IESLivePrefSampleGpuInfo gpu;
@property (nonatomic) IESLivePrefSampleAnrInfo anr;
@property (nonatomic) IESLivePrefSampleGameStreamInfo game_stream;
@property (nonatomic) IESLivePrefSampleStallInfo stall_info;
@property (nonatomic) IESLivePrefSampleVideoGift videoGift;
@property (nonatomic) IESLivePrefSampleEffectGift effectGift;
@property (nonatomic) IESLivePrefSampleLynxGift lynxGift;
@property (nonatomic) IESLivePrefSampleCommment comment;
@property (nonatomic) IESLivePrefSamplePK pk;
@property (nonatomic) IESLivePrefSampleSing sing;
@property (nonatomic) IESLivePrefSampleStallV2 stallV2;
@property (nonatomic) IESLivePerfSampleAnchor anchorPreviewFps;
@property (nonatomic) NSNumber generateTime;
@property (nonatomic) NSString monitor_trigger;
@property (nonatomic) BOOL skipFreq;
- (id)gpu;
- (id)monitor_trigger;
- (void)setCpu:;
- (void)setPss:;
- (id)stallV2;
- (id)anr;
- (id)pss;
- (void)setAnr:;
- (void)setGame_stream:;
- (void)setGpu:;
- (void)setNet:;
- (id)thermal;
- (id)anchorPreviewFps;
- (id)effectGift;
- (id)game_stream;
- (id)generateTime;
- (id)lynxGift;
- (id)pk;
- (void)setAnchorPreviewFps:;
- (void)setEffectGift:;
- (void)setGenerateTime:;
- (void)setLynxGift:;
- (void)setMonitor_trigger:;
- (void)setPk:;
- (void)setSing:;
- (void)setSkipFreq:;
- (void)setStallV2:;
- (void)setStall_info:;
- (void)setThermal:;
- (void)setVideoGift:;
- (id)sing;
- (BOOL)skipFreq;
- (id)stall_info;
- (id)toDictinaryV2;
- (id)videoGift;
- (id)stream;
- (void)setStream:;
- (id)comment;
- (void).cxx_destruct;
- (void)setComment:;
- (id)net;
- (BOOL)hasInfo:;
- (id)cpu;
- (id)battery;
- (void)setBattery:;
@end
