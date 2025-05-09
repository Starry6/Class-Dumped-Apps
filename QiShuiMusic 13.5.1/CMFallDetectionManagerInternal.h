@interface CMFallDetectionManagerInternal : NSObject
@property (nonatomic) @? newtonPromptHandler;
@property (nonatomic) CMAnomalyEvent mostRecentEvent;
@property (nonatomic) <CMFallDetectionManagerInternalDelegate> delegate;
@property (nonatomic) BOOL fallDetectionEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)_appDidBecomeActive:;
- (void)didHideFallDetectionPrompt;
- (void)didStartBackgroundSession;
- (void)_configureLocationClientIfNeeded;
- (void)_invalidateLocationClient;
- (void)setMostRecentEvent:;
- (void)_subscribeToCompletedFallEvents;
- (void)_fetchMostRecentFallEvent;
- (void)_handleAnomalyEventCompletedMessage:;
- (BOOL)fallDetectionEnabled;
- (void)_requestTCCWithCompletion:;
- (void)_appDelegateDidFinishProcessingWithDuration:;
- (void)_requestNewtonPromptWithCompletion:;
- (id)mostRecentEvent;
- (id)newtonPromptHandler;
- (void)setNewtonPromptHandler:;
+ (id)_responseDictionaryWithMessage:;
@end
