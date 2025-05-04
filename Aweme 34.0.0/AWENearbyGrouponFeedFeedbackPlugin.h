@interface AWENearbyGrouponFeedFeedbackPlugin : AWENearbyGrouponFeedBasePlugin
@property (nonatomic) AWENearbyGrouponFeedShowFeedbackTask currentTask;
@property (nonatomic) NSMutableArray delayedReleaseTaskPool;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryHideFeedbackViewOnFeedComponent:;
- (void)showFeedbackViewOnFeedComponent:longPressGestureRecognizer:;
- (void)removeFeedback:;
- (id)delayedReleaseTaskPool;
- (void)didFinishLoadFeedbackLynxView:;
- (void)didLoadFailedFeedbackLynxView:;
- (void)didClickCloseFeedbackButton:;
- (void)setDelayedReleaseTaskPool:;
- (id)currentTask;
- (void)setCurrentTask:;
- (void)scrollViewDidScroll:;
- (void).cxx_destruct;
- (void)taskDidFinish:;
- (void)hideFeedbackView;
@end
