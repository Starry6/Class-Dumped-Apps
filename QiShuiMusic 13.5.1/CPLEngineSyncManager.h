@interface CPLEngineSyncManager : NSObject
@property (nonatomic) Q state;
@property (nonatomic) BOOL shouldTryToMingleImmediately;
@property (nonatomic) CPLEngineLibrary engineLibrary;
@property (nonatomic) NSError lastError;
@property (nonatomic) BOOL hasBrokenScopes;
@property (nonatomic) NSArray brokenScopes;
@property (nonatomic) CPLPlatformObject platformObject;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)closeAndDeactivate:completionHandler:;
- (id)engineLibrary;
- (id)componentName;
- (void)task:didFinishWithError:;
- (void)_advanceToNextStateLocked;
- (void)openWithCompletionHandler:;
- (void)getStatusWithCompletionHandler:;
- (void)addDropDerivativesRecipe:writeToUserDefaults:withCompletionHandler:;
- (id)initWithEngineLibrary:;
- (void)_setState:;
- (BOOL)_checkForegroundAtLaunchForForceSyncTask;
- (id)_setupTaskWithCompletionHandler:;
- (void)getStatusDictionaryWithCompletionHandler:;
- (void)_launchForceSetupTask;
- (void)unblockSyncSessionWithReason:;
- (id)lastErrorUnlocked;
- (BOOL)prepareAndLaunchSyncTaskUnlocked:;
- (void)cancelAndBlockAllSyncSessionsWithReason:block:;
- (void)dispatchSyncBlock:;
- (id)_descriptionForCurrentState;
- (id)_transportUserIdentifier;
- (void)_advanceToNextStateLockedMinimalState:;
- (void)forceSyncTaskHasBeenCancelled:;
- (void)task:didProgress:userInfo:;
- (void)_cancelAllTasksLocked;
- (id)_shortDescriptionForCurrentState;
- (void)_forceSyncTaskDidFinishWithError:;
- (void)_launchForceSyncTaskIfNecessary;
- (void)_notifyEndOfSyncSession;
- (BOOL)_launchSetupTask;
- (void)_cancelAllTasksForSetup;
- (void)configureDirectTransportTask:;
- (void)_recordForcedSyncTask:discarded:error:;
- (void)requestDisabledFeaturesUpdate;
- (void)_addRuleToUserDefaults:;
- (void)_dispatchCancellerBlocksIfNecessary;
- (void)forceSyncTaskHasBeenLaunched:;
- (id)_descriptionForSetupTasks;
- (void)removeBrokenScope:;
- (BOOL)_launchNecessaryTasksForCurrentStateLocked;
- (unsigned long long)state;
- (void)_moveAllTasksToBackgroundLocked;
- (void)cancelCurrentSyncSession;
- (id)_dropDerivativeRulesFromUserDefaults;
- (void)_restartSyncSessionFromStateLocked:session:cancelIfNecessary:;
- (void).cxx_destruct;
- (void)_resetErrorForSyncSession;
- (void)startSyncSession:withMinimalPhase:rewind:;
- (void)discardTransportUserIdentifier;
- (BOOL)hasBrokenScopes;
- (void)resetTransportUserIdentifier;
- (id)platformObject;
- (void)_cancelCurrentSyncSession;
- (void)_discardPendingForceSyncTaskWithError:;
- (BOOL)_didFinishSetupTaskWithError:shouldStop:;
- (void)endClientWork:;
- (void)_reenableSchedulerForForceSyncTaskIfNecessary;
- (id)_descriptionForLaunchedTasks;
- (BOOL)shouldTryToMingleImmediately;
- (void)setBoostPriority:;
- (void)dispatchForcedTaskBlock:;
- (void)setSyncSessionShouldBeForeground:;
- (void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:;
- (void)_setTransportUserIdentifier:;
- (void)beginClientWork:;
- (void)_overrideBudgetsIfNeeded;
- (void)setShouldTryToMingleImmediately:;
- (void)addBrokenScope:;
- (void)_dispatchAfter:block:;
- (id)brokenScopes;
- (id)lastError;
- (void)setErrorForSyncSessionUnlocked:;
- (void)_disableSchedulerForForceSyncTaskIfNecessary;
+ (id)platformImplementationProtocol;
+ (id)stepForState:syncManager:session:;
+ (id)descriptionForState:;
+ (unsigned int)qualityOfServiceForForcedTasks;
+ (unsigned int)qualityOfServiceForSyncSessions;
+ (id)shortDescriptionForState:;
@end
