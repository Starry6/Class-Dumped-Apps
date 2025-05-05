@interface VESegmentFinder : NSObject
@property (nonatomic) IESQueue audioSegmentFinderQueue;
- (id)audioSegmentFinderQueue;
- (void)calcSegmentStartTime:originAudio:completeCallback:;
- (void)calcSegmentStartTimeWavAsync:originAudio:completeCallback:;
- (void)calcSegmentStartTimeWavSync:originAudio:completeCallback:;
- (id)generateTempWavUrl:;
- (void)setAudioSegmentFinderQueue:;
- (id)init;
- (void).cxx_destruct;
- (void)doInit;
@end
