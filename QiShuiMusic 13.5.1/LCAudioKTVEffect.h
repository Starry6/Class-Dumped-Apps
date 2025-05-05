@interface LCAudioKTVEffect : NSObject
@property (nonatomic) BOOL isStart;
@property (nonatomic) NSLock startLock;
@property (nonatomic) BOOL isSwitchSourcePath;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) q logCnt;
- (BOOL)isSwitchSourcePath;
- (long long)logCnt;
- (void)processWithData:numberOfChannel:numberOfSamples:;
- (void)setIsSwitchSourcePath:;
- (void)setLogCnt:;
- (void)setStartLock:;
- (void)startEffect;
- (id)startLock;
- (void)stopEffect;
- (int)switchKtvEffectWithSourcePath:;
- (id)init;
- (void)dealloc;
- (int)sampleRate;
- (void)setIsStart:;
- (BOOL)isStart;
- (void).cxx_destruct;
- (void)setSampleRate:;
@end
