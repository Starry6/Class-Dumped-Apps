@interface PKSelectionStatisticsManager : NSObject
- (void).cxx_destruct;
- (void)logSelectionAction:;
- (void)_endSelectionSession;
- (void)recordDidMakeSelectionWithType:;
- (void)recordLassoSelectionEventWithContentType:;
- (void)recordSmartSelectionEventWithType:contentType:gestureInvoked:;
- (void)logScrollEventWithContentOffset:;
- (void)logEndSelectionSessionIfNecessary;
- (void)_recordSelectionSession:;
+ (id)sharedStatisticsManager;
@end
