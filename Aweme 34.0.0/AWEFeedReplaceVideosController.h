@interface AWEFeedReplaceVideosController : AWEBaseController
@property (nonatomic) q triggerFrequencyTimeThreshold;
@property (nonatomic) double lastTriggerTime;
- (void)setTriggerFrequencyTimeThreshold:;
- (long long)triggerFrequencyTimeThreshold;
- (void)p_replaceUnconsumedVideosWithNotification:;
- (BOOL)isValidScene;
- (BOOL)shouldTriggerWithTimeFrequency;
- (BOOL)p_shouldReplaceVideoWithModel:replaceConfig:;
- (void)p_replaceUnconsumedVideosWithList:replaceConfig:trackInfo:;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setLastTriggerTime:;
- (double)lastTriggerTime;
@end
