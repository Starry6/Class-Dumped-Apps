@interface PGPictureInPictureController : NSObject
@property (nonatomic) BOOL pictureInPictureActive;
@property (nonatomic) NSSet pictureInPictureApplications;
@property (nonatomic) NSSet activePictureInPictureApplications;
@property (nonatomic) PGPictureInPictureApplication activePictureInPictureApplication;
@property (nonatomic) NSDictionary activeSceneSessionIdentifiersByApplication;
@property (nonatomic) BOOL isStartingStoppingOrCancellingPictureInPicture;
@property (nonatomic) <PGPictureInPictureControllerDelegate> delegate;
@property (nonatomic) <PGPictureInPictureAnalyticsDelegate> analyticsDelegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (void)setDelegate:;
- (id)delegate;
- (BOOL)listener:shouldAcceptNewConnection:;
- (void).cxx_destruct;
- (BOOL)isPictureInPictureActive;
- (id)analyticsDelegate;
- (void)setAnalyticsDelegate:;
- (BOOL)pictureInPictureRemoteObjectShouldAcceptSetupRequest:;
- (BOOL)pictureInPictureRemoteObjectShouldUpdateCancellationPolicyOnStart:;
- (BOOL)pictureInPictureRemoteObjectShouldCancelActivePictureInPictureOnStart:;
- (void)pictureInPictureRemoteObject:didRequestPictureInPictureStopForViewController:sourceSceneSessionIdentifier:animated:;
- (void)pictureInPictureRemoteObject:didCreatePictureInPictureViewController:;
- (void)pictureInPictureRemoteObject:willShowPictureInPictureViewController:;
- (void)pictureInPictureRemoteObject:didShowPictureInPictureViewController:;
- (void)pictureInPictureRemoteObject:willHidePictureInPictureViewController:;
- (void)pictureInPictureRemoteObject:didHidePictureInPictureViewController:;
- (void)pictureInPictureRemoteObject:willDestroyPictureInPictureViewController:;
- (void)pictureInPictureRemoteObjectNeedsActivationAndInterruptionPolicyUpdate:;
- (BOOL)pictureInPictureRemoteObjectHasBackgroundPIPAuthorization:;
- (BOOL)backgroundPIPService:canAuthorizeBackgroundPIPForActivitySessionWithIdentifier:appBundleIdentifier:;
- (void)backgroundPIPService:didGrantBackgroundPIPAuthorizationForActivitySessionWithIdentifier:;
- (void)backgroundPIPService:didRevokeBackgroundPIPAuthorizationForActivitySessionWithIdentifier:;
- (BOOL)isStartingStoppingOrCancellingPictureInPicture;
- (id)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:;
- (id)preferredContentSizeForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:;
- (BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:;
- (void)startPictureInPictureForApplicationEnteringBackground:animated:completionHandler:;
- (void)stopPictureInPictureForApplication:animated:completionHandler:;
- (void)cancelPictureInPictureForApplication:;
- (long long)contentTypePictureInPictureApplication:sceneSessionPersistentIdentifier:;
- (id)initialFrameForInteractivePictureInPictureAnimationEnteringBackgroundForApplication:sceneSessionPersistentIdentifier:;
- (id)preferredContentSizeForInteractivelyEnteringBackgroundForApplication:sceneSessionPersistentIdentifier:;
- (id)preferredContentSizeForActivePictureInPictureWithApplication:sceneSessionPersistentIdentifier:;
- (BOOL)shouldStartPictureInPictureForApplicationEnteringBackground:sceneSessionPersistentIdentifier:;
- (BOOL)isStoppingOrCancellingPictureInPictureForApplication:sceneSessionPersistentIdentifier:;
- (long long)tetheringModeForSceneSessionPersistentIdentifier:;
- (void)startPictureInPictureForApplicationEnteringBackground:sceneSessionPersistentIdentifier:animated:completionHandler:;
- (void)stopPictureInPictureForApplication:sceneSessionPersistentIdentifier:animated:completionHandler:;
- (void)beginTwoStageStopPictureInPictureForApplication:withSceneSessionPersistentIdentifier:animated:byRestoringUserInterfaceWithCompletionHandler:;
- (void)endTwoStageStopPictureInPictureForApplication:withSceneSessionPersistentIdentifier:animated:completionHandler:;
- (void)cancelPictureInPictureForApplication:sceneSessionPersistentIdentifier:;
- (void)startPictureInPictureResourcesUsageReductionForApplication:requestingViewController:;
- (void)stopPictureInPictureResourcesUsageReductionForApplication:requestingViewController:;
- (id)_remoteObjectForTestApplicationWithBundleIdentifier:;
- (void)startPictureInPictureTestActionForApplicationWithBundleIdentifier:;
- (void)restorePictureInPictureTestActionForApplicationWithBundleIdentifier:;
- (void)pictureInPictureInterruptionBegan;
- (void)pictureInPictureInterruptionBeganWithReason:;
- (BOOL)pictureInPictureInterruptionBeganWithReason:attribution:;
- (void)pictureInPictureInterruptionEnded;
- (void)pictureInPictureInterruptionEndedWithReason:;
- (void)pictureInPictureInterruptionEndedWithReason:attribution:;
- (id)existingPictureInPictureApplicationForBundleIdentifier:;
- (id)activePictureInPictureApplications;
- (id)suspendedPictureInPictureApplication;
- (id)activeSceneSessionIdentifiersByApplication;
- (void)activateBackgroundPIPAuthorizationService;
- (void)startMicroPIPIfPossibleForVideoCallWithScenePersistenceIdentifier:;
- (id)_remoteObjectsForPictureInPictureApplication:;
- (id)_remoteObjectForPictureInPictureApplication:passingTest:error:;
- (id)_remoteObjectForPictureInPictureApplication:sceneSessionPersistentIdentifier:error:;
- (id)_remoteObjectThatShouldStartPictureInPictureEnteringBackgroundForPictureInPictureApplication:sceneSessionPersistentIdentifier:error:;
- (id)_remoteObjectThatCanStopPictureInPictureApplication:sceneSessionPersistentIdentifier:error:;
- (id)_remoteObjectThatCanCancelPictureInPictureApplication:sceneSessionPersistentIdentifier:error:;
- (id)_remoteObjectThatCanEndTwoStageStopPictureInPictureApplication:error:;
- (BOOL)_hasActiveNonVideoCallRemoteObjectAuthorizedForBackgroundPIP;
- (id)_faceTimeVideoCallRemoteObject;
- (id)_faceTimeVideoCallInterruptionExemption;
- (void)_updateAllRemoteObjectsForPIPPossibleAndExemptAttributions;
- (void)_addRemoteObject:;
- (void)_removeRemoteObject:;
- (id)_pictureInPictureRemoteObjects;
- (id)pictureInPictureRemoteObjectInterruptionAssistant:;
- (id)pictureInPictureApplications;
- (id)activePictureInPictureApplication;
+ (BOOL)isPictureInPictureSupported;
@end
