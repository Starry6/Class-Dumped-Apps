@interface AWEXiguaAnchorTrackManager : NSObject
@property (nonatomic) BOOL isMonitoring;
@property (nonatomic) double timeForClick;
- (void)startMonitorTrackEvent;
- (void)stopMonitorTrackEvent;
- (void)adVCDidDismissNotification:;
- (void)setTimeForClick:;
- (double)timeForClick;
- (void)adVCWillLoadRequest:;
- (void)adUrlTaskDidFinishLoad:;
- (id)init;
- (BOOL)isMonitoring;
- (void)setIsMonitoring:;
+ (void)trackForClick;
+ (void)startMonitorTrackEvent;
+ (void)stopMonitorTrackEvent;
+ (void)trackForJsbReportLifeCycleWithParams:;
+ (id)sharedManager;
@end
