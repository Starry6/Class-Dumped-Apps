@interface AWELandscapeStorage : NSObject
- (id)init;
+ (BOOL)hasUseDoubleTapPause;
+ (void)setHasUseDoubleTapPause:;
+ (BOOL)fullScreenButtonGuideShow;
+ (void)setFullScreenButtonGuideShow:;
+ (BOOL)fullScreenButtonUse;
+ (void)setFullScreenButtonUse:;
+ (double)guideManagerShowTime;
+ (void)setGuideManagerShowTime:;
+ (BOOL)hasUseLongPressRatePlay;
+ (void)setHasUseLongPressRatePlay:;
+ (BOOL)nextEpisodeGuide;
+ (void)setNextEpisodeGuide:;
+ (BOOL)hasUsedPCContinuePlay;
+ (void)setHasUsedPCContinuePlay:;
+ (BOOL)hasUsedPlaybackSetting;
+ (void)setHasUsedPlaybackSetting:;
+ (BOOL)slideGuideShow;
+ (void)setSlideGuideShow:;
+ (long long)slideTimes;
+ (void)setSlideTimes:;
+ (BOOL)timingCloseGuide;
+ (void)setTimingCloseGuide:;
+ (BOOL)hasUsedTimingClose;
+ (void)setHasUsedTimingClose:;
+ (long long)playbackSetting;
+ (void)setPlaybackSetting:;
@end
