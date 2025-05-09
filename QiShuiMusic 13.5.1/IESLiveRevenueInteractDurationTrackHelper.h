@interface IESLiveRevenueInteractDurationTrackHelper : NSObject
@property (nonatomic) Q source;
@property (nonatomic) double startWatchTime;
@property (nonatomic) double startSmallWindowTime;
@property (nonatomic) double startBackgroundTime;
@property (nonatomic) double invalidWatchDuration;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)logEvent:extra:;
- (void)addInvalidWatchDurationWithStartTime:;
- (double)endDurationTracker;
- (id)initWithDIContext:source:;
- (double)invalidWatchDuration;
- (void)liveDidEnterBackground;
- (void)liveWillEnterForground;
- (void)playerDidEndplayInSmallWindow;
- (void)playerWillPlayInSmallWindow;
- (void)setInvalidWatchDuration:;
- (void)setStartBackgroundTime:;
- (void)setStartSmallWindowTime:;
- (void)setStartWatchTime:;
- (double)startBackgroundTime;
- (void)startDurationTracker;
- (double)startSmallWindowTime;
- (double)startWatchTime;
- (unsigned long long)source;
- (void)setSource:;
@end
