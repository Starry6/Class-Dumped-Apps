@interface AWEAwemeLongVideoAdTrackMediator : NSObject
@property (nonatomic) double totalTime;
@property (nonatomic) BOOL hasOver;
@property (nonatomic) BOOL shouldIgnoreShortOver;
@property (nonatomic) BOOL shouldLongVideoReplay;
- (void)adShortVideoReplayTrackWith:eventName:;
- (void)adShortVideoPlayTrackWith:;
- (BOOL)isValidModel:;
- (void)setShouldLongVideoReplay:;
- (void)setHasOver:;
- (id)getAdShortVideoTrackTimeKeyWith:;
- (void)setShouldIgnoreShortOver:;
- (void)adShortVideoBreakTrackWith:extra:;
- (id)getAdLongVideoTrackTimeKeyWith:;
- (BOOL)shouldIgnoreShortOver;
- (BOOL)hasOver;
- (BOOL)_isValidModel:;
- (void)adShortVideoBreakTrackWith:extra:isSlid:;
- (void)adShortVideoOverTrackWith:;
- (void)adShortVideoPauseTrackWith:;
- (void)adShortVideoResumeTrackWith:;
- (BOOL)shouldLongVideoReplay;
- (double)totalTime;
- (void)setTotalTime:;
+ (id)sharedInstance;
@end
