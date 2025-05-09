@interface AWEPlayerDynamicBlockManager : NSObject
@property (nonatomic) q firstBufferedDurationMs;
@property (nonatomic) q firstBufferedTime;
@property (nonatomic) BOOL dynamicBlockAverageSpeedStrategy;
@property (nonatomic) double dynamicBlockAverageSpeedThreshold;
@property (nonatomic) BOOL dynamicBlockMinBufferStrategy;
@property (nonatomic) double dynamicBlockMinBuffer;
@property (nonatomic) BOOL dynamicBlockDistinguishRebuffering;
@property (nonatomic) double dynamicBlockDurationPreloaded;
@property (nonatomic) double dynamicBlockDurationNonPreloaded;
@property (nonatomic) BOOL preloaded;
@property (nonatomic) q lastBufferedDurationMs;
@property (nonatomic) q lastBufferedTime;
@property (nonatomic) double blockCnt;
@property (nonatomic) BOOL loadControlOpen;
@property (nonatomic) BOOL dynamicBlockLatestSpeedStrategy;
@property (nonatomic) double dynamicBlockSpeedThreshold;
@property (nonatomic) q dynamicBlockStrategyType;
@property (nonatomic) double dynamicBlockDurationInitial;
@property (nonatomic) double dynamicBlockFactor;
@property (nonatomic) double dynamicBlockDurationMax;
@property (nonatomic) double videoBuffer;
@property (nonatomic) double audioBuffer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)shouldStartPlayback:withplaybackSpeed:withreBuffering:;
- (long long)onTrackSelected:;
- (BOOL)loadControlOpen;
- (double)blockCnt;
- (void)setBlockCnt:;
- (void)setLastBufferedDurationMs:;
- (void)setLastBufferedTime:;
- (double)videoBuffer;
- (BOOL)checkBlockConditionWithBufferedTime:;
- (long long)lastBufferedDurationMs;
- (long long)lastBufferedTime;
- (void)setLoadControlOpen:;
- (void)setVideoBuffer:;
- (BOOL)dynamicBlockDistinguishRebuffering;
- (BOOL)shouldStartPlayback:withplaybackSpeed:;
- (double)dynamicBlockDurationPreloaded;
- (double)dynamicBlockDurationNonPreloaded;
- (BOOL)preloaded;
- (long long)firstBufferedTime;
- (long long)firstBufferedDurationMs;
- (void)setFirstBufferedTime:;
- (void)setFirstBufferedDurationMs:;
- (BOOL)checkSpeedConditionWithBufferedTime:currentBufferedTime:;
- (BOOL)dynamicBlockMinBufferStrategy;
- (BOOL)checkMinBufferConditionWithBufferedTime:;
- (double)dynamicBlockMinBuffer;
- (BOOL)dynamicBlockLatestSpeedStrategy;
- (double)dynamicBlockSpeedThreshold;
- (BOOL)dynamicBlockAverageSpeedStrategy;
- (double)dynamicBlockAverageSpeedThreshold;
- (long long)dynamicBlockStrategyType;
- (double)dynamicBlockDurationInitial;
- (double)dynamicBlockFactor;
- (double)dynamicBlockDurationMax;
- (void)setDynamicBlockAverageSpeedStrategy:;
- (void)setDynamicBlockAverageSpeedThreshold:;
- (void)setDynamicBlockMinBufferStrategy:;
- (void)setDynamicBlockMinBuffer:;
- (void)setDynamicBlockDistinguishRebuffering:;
- (void)setDynamicBlockDurationPreloaded:;
- (void)setDynamicBlockDurationNonPreloaded:;
- (void)setPreloaded:;
- (void)setDynamicBlockLatestSpeedStrategy:;
- (void)setDynamicBlockSpeedThreshold:;
- (void)setDynamicBlockStrategyType:;
- (void)setDynamicBlockDurationInitial:;
- (void)setDynamicBlockFactor:;
- (void)setDynamicBlockDurationMax:;
- (id)init;
- (void)setAudioBuffer:;
- (double)audioBuffer;
@end
