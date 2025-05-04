@interface AWEFeedSkipInfoRecordingController : AWEBaseController
@property (nonatomic) AWESkipInfoRecordingStatusTimer timerTask;
@property (nonatomic) NSMutableArray cachedSkipInfo;
- (void)scrollViewDidScrollEndWithActive;
- (id)arrayToJsonString:;
- (void)appWillEnterBackground:;
- (long long)countThreshold;
- (id)timerTask;
- (void)setTimerTask:;
- (void)cacheSkipInfoNotification:;
- (id)cachedSkipInfo;
- (void)reportSkipInfoIfNeeded;
- (void)reportSkipInfo;
- (void)setCachedSkipInfo:;
- (void)reportSkipInfo:;
- (double)timeInterval;
- (void)viewWillDisappear:;
- (void)timing;
- (void)dealloc;
- (void)viewDidLoad;
- (void)appWillEnterForeground:;
- (void).cxx_destruct;
- (void)addNotificationObserver;
@end
