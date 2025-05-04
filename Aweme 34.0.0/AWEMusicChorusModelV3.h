@interface AWEMusicChorusModelV3 : AWEBaseDataModel
@property (nonatomic) q startMs;
@property (nonatomic) q durationMs;
@property (nonatomic) double startProb;
@property (nonatomic) double endProb;
@property (nonatomic) double chorusProb;
- (void)setStartMs:;
- (void)setStartProb:;
- (void)setEndProb:;
- (void)setChorusProb:;
- (double)startProb;
- (double)endProb;
- (double)chorusProb;
- (long long)durationMs;
- (void)setDurationMs:;
- (long long)startMs;
+ (id)JSONKeyPathsByPropertyKey;
@end
