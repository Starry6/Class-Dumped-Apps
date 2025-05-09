@interface AWEPaidStreamAuth : NSObject
@property (nonatomic) NSHashTable authEventHandlers;
@property (nonatomic) AWEPaidAuthConfig authConfig;
@property (nonatomic) AWEPaidStreamIAAGetRewardInfoManager loadAwardInfoManager;
@property (nonatomic) BOOL isRequesting;
@property (nonatomic) q awardConfigListCurrentCursor;
@property (nonatomic) <AWEPaidAuthDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isRequesting;
- (void)setIsRequesting:;
- (id)authConfig;
- (void)setAuthConfig:;
- (id)initWithAuthConfig:;
- (void)registerAuthEventHandler:;
- (void)log:extraParams:;
- (void)unregisterAuthEventHandler:;
- (void)loadMoreAuthWithCompletion:;
- (void)sendEventToHandlers:event:;
- (id)registeredAuthEventHandlers;
- (void)sendEventWillStartAuth;
- (void)sendEventDidStartAuth:;
- (void)sendEventDidEndAuth:;
- (void)sendEventDidUpdateAuthWithUpdatedAuthItems:;
- (id)authEventHandlers;
- (void)setLoadAwardInfoManager:;
- (id)loadAwardInfoManager;
- (void)syncLatestIAAStatusWithAuthConfig:;
- (void)getSendAwardConfigIfNeededWithAuthConfig:;
- (id)currentPaidAuthItemForAuthConfig:;
- (long long)awardConfigListCurrentCursor;
- (void)setAwardConfigListCurrentCursor:;
- (id)authItemForPaidStreamIAAAwardADConfig:;
- (void)reportStartTrialInfo;
- (void)reportLeaveTrialInfo;
- (void)reportPromiseInfo;
- (void)setAuthEventHandlers:;
- (id)delegate;
- (void)preload;
- (void).cxx_destruct;
- (void)startWithCompletionHandler:;
- (void)setDelegate:;
- (void)stop;
- (void)pause;
- (void)leave;
@end
