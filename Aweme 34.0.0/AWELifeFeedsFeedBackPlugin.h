@interface AWELifeFeedsFeedBackPlugin : AWELifeFeedsBasePlugin
@property (nonatomic) AWELifeFeedsShowFeedbackTask currentTask;
@property (nonatomic) NSMutableArray delayedReleaseTaskPool;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)tryHideFeedbackViewOnFeedComponent:;
- (void)removeFeedback:;
- (id)delayedReleaseTaskPool;
- (void)didFinishLoadFeedbackLynxView:;
- (void)didLoadFailedFeedbackLynxView:;
- (void)didClickCloseFeedbackButton:;
- (void)setDelayedReleaseTaskPool:;
- (void)didLongPressComponentView:viewModel:longPress:;
- (void)pageDidScroll:scrollView:;
- (void)bindPageViewModel:incrementNodeTags:;
- (id)currentTask;
- (void)setCurrentTask:;
- (void).cxx_destruct;
- (void)taskDidFinish:;
- (void)hideFeedbackView;
@end
