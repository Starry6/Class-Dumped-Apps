@interface AWEVideoDraftLifecycleManager : NSObject
@property (nonatomic) BOOL didStart;
@property (nonatomic) AWEVideoDraftTracker draftTracker;
- (void)p_addObserver;
- (void)coldStartAction;
- (void)p_handleAppBecomeActiveNotification;
- (id)draftTracker;
- (void)p_updateDraftsStatusWithFinish:;
- (void)executeUpdateDraftsStatus;
- (void)transitionStatusToDeleteWithDraftID:;
- (void)setDraftTracker:;
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)didStart;
- (void)setDidStart:;
+ (void)registerDraftResourceMonitors;
+ (id)sharedManager;
@end
