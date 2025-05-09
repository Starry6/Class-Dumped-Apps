@interface IXAppInstallCoordinator : NSObject
@property (nonatomic) IXAppInstallCoordinatorSeed seed;
@property (nonatomic) NSObject<OS_dispatch_queue> observerCalloutQueue;
@property (nonatomic) NSObject<OS_dispatch_queue> internalQueue;
@property (nonatomic) Q observersCalled;
@property (nonatomic) LSApplicationRecord completedApplicationRecord;
@property (nonatomic) BOOL complete;
@property (nonatomic) NSError error;
@property (nonatomic) Q errorSourceIdentifier;
@property (nonatomic) BOOL hasAppAssetPromise;
@property (nonatomic) BOOL hasInstallOptions;
@property (nonatomic) BOOL hasInitialODRAssetPromises;
@property (nonatomic) BOOL hasUserDataPromise;
@property (nonatomic) NSArray validInstallTypes;
@property (nonatomic) Q coordinationState;
@property (nonatomic) Q creatorIdentifier;
@property (nonatomic) I creatorEUID;
@property (nonatomic) NSString bundleID;
@property (nonatomic) IXApplicationIdentity identity;
@property (nonatomic) NSUUID uniqueIdentifier;
@property (nonatomic) NSString descriptionWithRemoteState;
@property (nonatomic) <IXAppInstallCoordinatorObserver> observer;
@property (nonatomic) BOOL hasPlaceholderPromise;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)seed;
- (BOOL)isComplete;
- (id)identity;
- (void)dealloc;
- (BOOL)resumeWithError:;
- (id)uniqueIdentifier;
- (void)setError:;
- (id)error;
- (unsigned long long)hash;
- (void)setObserver:;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSeed:;
- (void)setComplete:;
- (id)bundleID;
- (BOOL)isEqual:;
- (id)internalQueue;
- (id)observer;
- (BOOL)setUserDataPromise:error:;
- (BOOL)setPlaceholderPromise:error:;
- (BOOL)setAppAssetPromise:error:;
- (id)appAssetPromiseWithError:;
- (BOOL)setAppAssetPromiseResponsibleClient:error:;
- (unsigned long long)appAssetPromiseResponsibleClientWithError:;
- (BOOL)appAssetPromiseHasBegunFulfillment:error:;
- (BOOL)hasAppAssetPromise;
- (BOOL)setInstallOptions:error:;
- (BOOL)hasInstallOptions;
- (id)userDataPromiseWithError:;
- (id)userDataRestoreShouldBegin:;
- (BOOL)hasUserDataPromise;
- (BOOL)setRemovability:byClient:error:;
- (unsigned long long)removabilityWithError:;
- (id)placeholderPromiseWithError:;
- (BOOL)hasPlaceholderPromise;
- (id)observerCalloutQueue;
- (void)_conveyCurrentPriorityBoostReplacingExisting:;
- (void)_updateInitWithSeed:notifyDaemon:;
- (void)cancelForReason:;
- (BOOL)cancelForReason:client:error:;
- (BOOL)setImportance:error:;
- (unsigned long long)importanceWithError:;
- (BOOL)setInitialODRAssetPromises:error:;
- (id)initialODRAssetPromisesWithError:;
- (BOOL)hasInitialODRAssetPromises;
- (id)preparationPromiseWithError:;
- (BOOL)setPreparationPromise:withError:;
- (BOOL)setDeviceSecurityPromise:error:;
- (id)deviceSecurityPromiseWithError:;
- (BOOL)getHasDeviceSecurityPromise:error:;
- (BOOL)setInstallTargetDirectoryURL:error:;
- (id)installTargetDirectoryURLWithError:;
- (BOOL)setTargetBundleURL:preservingTargetBundleNameOnUpdate:error:;
- (BOOL)setTargetBundleURL:error:;
- (id)targetBundleURLWithError:;
- (BOOL)setAppQuitPromise:error:;
- (id)appQuitPromiseWithError:;
- (BOOL)setManagedInstallUUID:error:;
- (id)managedInstallUUIDWithError:;
- (BOOL)setShouldOverrideGatekeeper:error:;
- (BOOL)getShouldOverrideGatekeeperValue:error:;
- (BOOL)setPlaceholderDisposition:error:;
- (unsigned long long)placeholderDispositionWithError:;
- (unsigned char)coordinatorScopeWithError:;
- (BOOL)convertToGloballyScopedCoordinatorWithError:;
- (unsigned long long)errorSourceIdentifier;
- (void)setErrorSourceIdentifier:;
- (void)setComplete:forApplicationRecord:;
- (void)_onObserverCalloutQueue_handleObserverForCompletedCoordinator:completedApplicationRecord:error:client:;
- (unsigned long long)observersCalled;
- (void)setObserversCalled:;
- (BOOL)pauseWithError:;
- (BOOL)isPaused:withError:;
- (BOOL)prioritizeWithError:;
- (id)descriptionWithRemoteState;
- (unsigned long long)coordinationState;
- (unsigned long long)creatorIdentifier;
- (unsigned int)creatorEUID;
- (id)_clientDelegate_didRegisterForObservation;
- (id)_clientDelegate_shouldPrioritize;
- (id)_clientDelegate_shouldResume;
- (id)_clientDelegate_shouldPause;
- (id)_clientDelegate_promiseDidBeginFulfillmentWithIdentifier:;
- (id)_clientDelegate_shouldBeginRestoringUserData;
- (id)_clientDelegate_placeholderDidInstallForApplicationRecord:;
- (id)_clientDelegate_didCompleteForApplicationRecord:;
- (id)_clientDelegate_didCancelWithError:client:;
- (id)_clientDelegate_didUpdateProgress:forPhase:overallProgress:;
- (id)completedApplicationRecord;
+ (unsigned long long)intent;
+ (id)existingCoordinatorForAppWithIdentity:error:;
+ (void)installApplication:toTargetDirectory:consumeSource:shouldOverrideGatekeeper:options:completion:;
+ (BOOL)setTestModeForIdentifierPrefix:testMode:testSpecificValidationData:;
+ (void)cancelCoordinatorsForAppsWithBundleIDs:withReason:client:completion:;
+ (BOOL)resumeCoordinatorForAppWithIdentity:error:;
+ (void)uninstallAppWithBundleID:options:completion:;
+ (BOOL)purgeAllCoordinatorsAndPromisesForCreator:;
+ (BOOL)updateiTunesMetadataForAppWithIdentity:wrapperURL:plistData:error:;
+ (id)coordinatorForAppWithIdentity:withClientID:createIfNotExisting:created:error:;
+ (void)_beginInstallForURL:forPersonaUniqueString:consumeSource:options:progressBlock:completionWithIdentity:;
+ (void)installApplication:toTargetDirectory:consumeSource:options:completion:;
+ (void)installApplication:consumeSource:options:completion:;
+ (void)setRemovability:forAppWithBundleID:completion:;
+ (BOOL)refreshContainerTypes:forApplicationIdentity:reason:error:;
+ (void)setRemovability:forAppWithBundleID:byClient:completion:;
+ (void)uninstallAppWithBundleID:requestUserConfirmation:waitForDeletion:completion:;
+ (void)revertAppWithBundleID:completion:;
+ (Class)classForIntent:;
+ (void)prioritizeCoordinatorForAppWithBundleID:completion:;
+ (void)enumerateCoordinatorsUsingBlock:;
+ (id)coordinatorForAppWithIdentity:targetingInstallationDomain:withClientID:createIfNotExisting:created:error:;
+ (BOOL)killDaemonForTesting;
+ (void)installApplication:toURL:consumeSource:options:completion:;
+ (void)setSkipIntentValidation:;
+ (void)revertAppWithBundleID:completionWithApplicationRecord:;
+ (void)demoteAppToPlaceholderWithApplicationIdentity:forReason:waitForDeletion:ignoreRemovability:completion:;
+ (BOOL)demoteAppToPlaceholderWithApplicationIdentity:forReason:waitForDeletion:ignoreRemovability:error:;
+ (BOOL)updateiTunesMetadataForAppWithIdentity:plistData:options:error:;
+ (void)installApplication:toURL:consumeSource:shouldOverrideGatekeeper:options:completion:;
+ (void)cancelCoordinatorForAppWithIdentity:withReason:client:completion:;
+ (BOOL)demoteAppToPlaceholderWithBundleID:forReason:waitForDeletion:error:;
+ (unsigned long long)removabilityForAppWithIdentity:error:;
+ (BOOL)demoteAppToPlaceholderWithBundleID:forReason:error:;
+ (id)coordinatorForAppWithBundleID:withClientID:createIfNotExisting:created:error:;
+ (void)removabilityForAppWithBundleID:completion:;
+ (id)_coordinatorForAppWithIdentity:targetingInstallationDomain:withClientID:intent:createIfNotExisting:requireMatchingIntent:scopeRequirement:created:error:;
+ (BOOL)updateSINFForAppWithIdentity:sinfData:options:error:;
+ (id)existingCoordinatorForAppWithBundleID:error:;
+ (void)uninstallAppWithIdentity:options:completion:;
+ (BOOL)resumeCoordinatorForAppWithBundleID:error:;
+ (void)_beginInstallForURL:forPersonaUniqueString:consumeSource:options:progressBlock:completion:;
+ (BOOL)setTestingEnabled:;
+ (BOOL)refreshContainerTypes:forBundleID:reason:error:;
+ (BOOL)prioritizeCoordinatorForAppWithIdentity:error:;
+ (BOOL)cancelCoordinatorForAppWithIdentity:withReason:client:error:;
+ (BOOL)modifiesLocalLaunchServicesDatabase;
+ (BOOL)cancelCoordinatorsForAppsWithBundleIDs:withReason:client:error:;
+ (BOOL)refreshDataContainerForBundleID:reason:error:;
+ (void)resumeCoordinatorForAppWithIdentity:completion:;
+ (void)cancelCoordinatorForAppWithBundleID:withReason:client:completion:;
+ (BOOL)uninstallAppWithIdentity:options:disposition:error:legacyProgressBlock:;
+ (BOOL)enumerateCoordinatorsWithBlock:error:;
+ (void)uninstallAppWithBundleID:requestUserConfirmation:completion:;
+ (id)processScopedCoordinatorForAppWithIdentity:targetingInstallationDomain:withClientID:createIfNotExisting:created:error:;
+ (int)daemonPid;
+ (unsigned long long)removabilityForAppWithBundleID:error:;
+ (BOOL)uninstallAppWithBundleID:error:;
+ (BOOL)setTestModeForIdentifierPrefix:testMode:;
+ (BOOL)enumerateCoordinatorsWithError:usingBlock:;
+ (BOOL)demoteAppToPlaceholderWithBundleID:forReason:waitForDeletion:ignoreRemovability:error:;
+ (BOOL)registerContentsForDiskImageAtURL:options:withError:;
+ (BOOL)postNSCurrentLocaleDidChangeNotification;
+ (BOOL)uninstallAppWithIdentity:options:disposition:error:;
+ (void)setRemovability:forAppWithIdentity:byClient:completion:;
+ (void)installApplication:forPersonaUniqueString:consumeSource:options:completion:;
+ (void)pauseCoordinatorForAppWithIdentity:completion:;
+ (BOOL)revertAppWithBundleID:error:;
+ (void)installApplication:options:completion:;
+ (id)_coordinatorForIdentity:created:error:;
+ (BOOL)cancelCoordinatorsForAppsWithApplicationIdentities:withReason:client:error:;
+ (BOOL)_synchronouslyEnumerateCoordinatorsForIntent:error:usingBlock:;
+ (id)processScopedCoordinatorForAppWithIdentity:withClientID:createIfNotExisting:created:error:;
+ (void)prioritizeCoordinatorForAppWithIdentity:completion:;
+ (BOOL)unregisterContentsForDiskImageAtURL:options:withError:;
+ (void)removabilityForAppWithIdentity:completion:;
+ (BOOL)uninstallAppWithBundleID:options:disposition:error:legacyProgressBlock:;
+ (BOOL)uninstallAppWithBundleID:options:disposition:error:;
+ (void)_demoteAppToPlaceholderWithBundleID:forReason:waitForDeletion:ignoreRemovability:completion:;
+ (BOOL)skipIntentValidation;
+ (BOOL)revertAppWithIdentity:resultingApplicationRecord:error:;
+ (void)revertAppWithIdentity:completionWithApplicationRecord:;
+ (BOOL)prioritizeCoordinatorForAppWithBundleID:error:;
+ (BOOL)pauseCoordinatorForAppWithBundleID:error:;
+ (void)demoteAppToPlaceholderWithBundleID:forReason:waitForDeletion:completion:;
+ (void)resumeCoordinatorForAppWithBundleID:completion:;
+ (void)_asynchronouslyEnumerateCoordinatorsForIntent:usingBlock:;
+ (void)_validatePreconditionForIntent:matchesCurrentInstallStateForBundleID:;
+ (BOOL)pauseCoordinatorForAppWithIdentity:error:;
+ (void)pauseCoordinatorForAppWithBundleID:completion:;
+ (void)cancelCoordinatorsForAppsWithApplicationIdentities:withReason:client:completion:;
+ (BOOL)uninstallAppWithBundleID:requestUserConfirmation:waitForDeletion:error:;
+ (BOOL)simulateClientDeath;
+ (void)demoteAppToPlaceholderWithBundleID:forReason:waitForDeletion:ignoreRemovability:completion:;
+ (void)installApplication:consumeSource:options:legacyProgressBlock:completion:;
+ (BOOL)updateSINFForAppWithIdentity:wrapperURL:sinfData:error:;
+ (BOOL)revertAppWithBundleID:resultingApplicationRecord:error:;
+ (BOOL)cancelCoordinatorForAppWithBundleID:withReason:client:error:;
@end
