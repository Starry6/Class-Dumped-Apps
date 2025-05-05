@interface BUStatsRaptorTracker : BURaptorTracker
- (void)_pbu_inUnknown_sendWithPostDict:completionHandler:;
- (id)didCleanNotificationName;
- (Class)raptorModelClass;
- (long long)raptorTrackerType;
- (id)sentNotificationName;
- (id)willCleanNotificationName;
- (id)eventKey;
+ (id)sharedInstance;
@end
