@interface MPAVController : NSObject
@property (nonatomic) MPAVItem currentItem;
@property (nonatomic) BOOL playing;
@property (nonatomic) q state;
@property (nonatomic) BOOL shouldDisplayAsPlaying;
@property (nonatomic) float rate;
@property (nonatomic) double currentTime;
- (void)setCurrentTime:;
- (void)setRate:;
- (BOOL)isPlaying;
- (void)setCurrentItem:;
- (void)play;
- (void)setState:;
- (float)rate;
- (void)setPlaying:;
- (id)currentItem;
- (long long)state;
- (void).cxx_destruct;
- (double)currentTime;
- (void)pause;
- (void)removeTimeObserver:;
- (id)addPeriodicTimeObserverForInterval:usingBlock:;
- (BOOL)shouldDisplayAsPlaying;
- (void)setShouldDisplayAsPlaying:;
@end
