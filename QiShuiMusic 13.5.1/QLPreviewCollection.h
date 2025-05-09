@interface QLPreviewCollection : UIViewController
@property (nonatomic) BOOL fullScreen;
@property (nonatomic) BOOL isEditing;
@property (nonatomic) BOOL currentItemViewControllerIsPerformingFocusedAction;
@property (nonatomic) BOOL isTransitioningPage;
@property (nonatomic) @? prepareForInvalidationCompletionHandler;
@property (nonatomic) NSString overrideParentApplicationDisplayIdentifier;
@property (nonatomic) UIPanGestureRecognizer slideGesture;
@property (nonatomic) UIPinchGestureRecognizer pinchGesture;
@property (nonatomic) UIRotationGestureRecognizer rotationGesture;
@property (nonatomic) QLSwipeDownTracker swipeDownTracker;
@property (nonatomic) QLPinchRotationTracker pinchRotationTracker;
@property (nonatomic) QLTransitionContext transitionContext;
@property (nonatomic) <QLTransitionControllerProtocol> transitionController;
@property (nonatomic) QLTransitionDriver transitionDriver;
@property (nonatomic) NSString parentApplicationDisplayIdentifier;
@property (nonatomic) NSString hostApplicationBundleIdentifier;
@property (nonatomic) BOOL hasTriggeredInteractiveTransitionAnimation;
@property (nonatomic) QLPageViewController pageViewController;
@property (nonatomic) <QLPreviewControllerStateProtocol><QLPreviewControllerStateProtocol_UIKit> stateManager;
@property (nonatomic) QLItemViewController currentPreviewItemViewController;
@property (nonatomic) BOOL isAvailable;
@property (nonatomic) BOOL allowInteractiveTransitions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)_updatePreferredContentSize;
- (BOOL)isEditing;
- (id)pinchGesture;
- (id)transitionContext;
- (BOOL)_isVisible;
- (void)setIsContentManaged:;
- (void)setPinchGesture:;
- (id)pageViewController;
- (BOOL)gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:;
- (id)transitionController;
- (void)setTransitionContext:;
- (void)viewDidDisappear:;
- (BOOL)isAvailable;
- (id)gestureTracker;
- (id)accessoryView;
- (void)setFullScreen:;
- (void)setPageViewController:;
- (void)setTransitionController:;
- (void).cxx_destruct;
- (BOOL)gestureRecognizer:shouldReceiveTouch:;
- (BOOL)isRemote;
- (BOOL)transitionInProgress;
- (void)setIsAvailable:;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (BOOL)gestureRecognizerShouldBegin:;
- (void)loadView;
- (void)setOverrideParentApplicationDisplayIdentifier:;
- (id)stateManager;
- (BOOL)gestureRecognizer:shouldRequireFailureOfGestureRecognizer:;
- (id)overrideParentApplicationDisplayIdentifier;
- (BOOL)_isBeingDismissed;
- (BOOL)fullScreen;
- (void)updateTransitionWithProgress:;
- (id)swipeDownTracker;
- (void)setSwipeDownTracker:;
- (void)hostApplicationDidBecomeActive;
- (id)hostApplicationBundleIdentifier;
- (void)setIsEditing:;
- (BOOL)_isBeingPresented;
- (void)previewItemViewController:wantsToForwardMessageToHost:completionHandler:;
- (void)previewItemViewController:didFailWithError:;
- (void)prepareForActionSheetPresentationWithCompletionHandler:;
- (long long)dragDataOwnerForPreviewItemViewController:;
- (void)requestLockForCurrentItem;
- (void)actionSheetDidDismiss;
- (void)documentMenuActionWillBegin;
- (void)setAppearance:animated:;
- (void)hostSceneWillDeactivate;
- (void)hostApplicationDidEnterBackground:;
- (void)setHostApplicationBundleIdentifier:;
- (void)setStateManager:;
- (void)setScreenEdgePanWidth:;
- (void)previewItemDisplayState:wasAppliedToItemAtIndex:;
- (void)setPreviewItemDisplayState:onItemAtIndex:;
- (void)setCurrentPreviewItemIndex:animated:;
- (void)setAllowInteractiveTransitions:;
- (BOOL)allowInteractiveTransitions;
- (id)slideGesture;
- (void)setSlideGesture:;
- (id)rotationGesture;
- (void)setRotationGesture:;
- (id)pinchRotationTracker;
- (void)setPinchRotationTracker:;
- (void)completeTransition:withDuration:;
- (void)startNonInteractiveTransitionPresenting:;
- (void)_setUpTransitionDriverForPresenting:duration:;
- (void)_tearDownTransition:;
- (void)rotationOrPinchGestureRecognized:;
- (void)slideToDismissGestureRecognized:;
- (id)parentApplicationDisplayIdentifier;
- (void)tearDownTransition:;
- (id)transitionDriver;
- (void)configureWithNumberOfItems:currentPreviewItemIndex:itemProvider:stateManager:;
- (void)toolbarButtonsForTraitCollection:withCompletionHandler:;
- (void)toolbarButtonPressedWithIdentifier:completionHandler:;
- (void)shouldDisplayLockActivityWithCompletionHandler:;
- (void)keyCommandsWithCompletionHandler:;
- (void)keyCommandWasPerformed:;
- (void)notifyFirstTimeAppearanceWithActions:;
- (void)notifyStateRestorationUserInfo:;
- (void)getCurrentPreviewActivityUserInfoWithCompletionHandler:;
- (void)startTransitionWithSourceViewProvider:transitionController:presenting:useInteractiveTransition:completionHandler:;
- (void)setLoadingString:;
- (void)overrideParentApplicationDisplayIdentifierWithIdentifier:;
- (void)preparePreviewCollectionForInvalidationWithCompletionHandler:;
- (void)invalidateService;
- (void)hostViewControlerTransitionToState:animated:;
- (void)saveCurrentPreviewEditsSynchronously:withCompletionHandler:;
- (void)saveIntoPhotoLibraryMediaWithURLWrapper:previewItemType:completionHandler:;
- (void)pageViewController:willTransitionFromPage:withIndex:toPage:withIndex:animated:;
- (void)pageViewController:didTransitionFromPage:withIndex:toPage:withIndex:animated:;
- (id)pageViewController:parallaxViewInPage:withIndex:;
- (void)pageViewController:isTransitioningFromPage:withIndex:toPage:withIndex:withProgress:;
- (void)pageViewController:willCancelTransitionFromPage:withIndex:toPage:withIndex:animated:;
- (void)pageViewController:didCancelTransitionFromPage:withIndex:toPage:withIndex:animated:;
- (void)pageViewController:willBeginInteractiveTransitionFromPage:withIndex:toPage:withIndex:;
- (void)previewItemViewControllerWantsUpdateOverlay:animated:;
- (BOOL)_toggleFullscreenIfPossible;
- (void)_tapGestureRecognized;
- (id)pageViewController:viewControllerAtIndex:;
- (void)previewItemViewController:wantsFullScreen:;
- (void)previewItemViewController:wantsToSetRemoteEdgePanGestureWidth:;
- (void)previewItemViewControllerWantsToShowShareSheet:;
- (void)previewItemViewController:wantsToShowShareSheetWithPopoverTracker:customSharedURL:dismissCompletion:;
- (void)previewItemViewControllerWantsUpdateKeyCommands:;
- (void)previewItemViewController:wantsToOpenURL:;
- (void)previewItemViewControllerWantsToShowNoInternetConnectivityAlert:;
- (void)previewItemViewControllerWantsUpdatePrinter:;
- (void)previewItemViewControllerDidUpdateTitle:;
- (void)previewItemViewControllerDidUpdatePreferredContentSize:;
- (void)previewItemViewControllerWantsToDismissQuickLook:;
- (void)previewItemViewControllerDidChangeCurrentPreviewController:;
- (void)expandContentOfPreviewItemViewController:unarchivedItemsURL:;
- (id)loadingTextForPreviewItemViewController:;
- (void)previewItemViewController:didEnableEditMode:;
- (void)previewItemViewControllerDidEditCopyOfPreviewItem:editedCopy:completionHandler:;
- (void)previewItemViewController:hasUnsavedEdits:;
- (void)previewItemViewControllerDidAcquireLock:;
- (void)previewItemViewControllerDidHandOverLock:;
- (void)previewItemViewController:wantsToUpdateStateRestorationWithUserInfo:;
- (void)previewItemViewController:wantsToUpdatePreviewItemDisplayState:;
- (BOOL)itemPresenterViewControllerShouldForceAutodownloadFile:;
- (void)_updatePreviewVisibility:;
- (void)updateCurrentPreviewConfiguration;
- (void)setRemoteAccessoryContainer:;
- (id)currentPreviewItemViewController;
- (void)_notifyHostPreviewCollectionIsReadyForInvalidationIfNeeded;
- (void)_setCurrentPreviewItemIndex:animated:;
- (id)_defaultKeyCommands;
- (void)triggerInteractiveTransitionAnimationIfNeeded;
- (BOOL)pinchDismissGestureInProgress;
- (void)_updateFullscreenBackgroundColor;
- (void)_updateFullscreen;
- (void)_updateOverlay:;
- (void)_updateOverlayVisibility;
- (void)_updateTitleFromController;
- (void)_updatePrinter;
- (void)_cleanAccessoryViewContainer;
- (void)_updateAccessoryViewWithPreviewItemViewController:;
- (void)_updateWhitePointAdaptivityStyle;
- (void)_installGestures;
- (void)setCurrentItemViewControllerIsPerformingFocusedAction:;
- (void)setIsTransitioningPage:;
- (void)_updateCanChangeCurrentPage;
- (void)_updateEnableChangingPageUsingGestures;
- (id)_sandboxExtensionForEditedFileAtURL:;
- (BOOL)_itemViewControllerIsCurrentlyPresentedItemViewController:;
- (BOOL)currentItemViewControllerIsPerformingFocusedAction;
- (BOOL)isTransitioningPage;
- (id)prepareForInvalidationCompletionHandler;
- (void)setPrepareForInvalidationCompletionHandler:;
- (void)setTransitionDriver:;
- (BOOL)hasTriggeredInteractiveTransitionAnimation;
- (void)setHasTriggeredInteractiveTransitionAnimation:;
+ (id)quickLookExtension;
+ (void)remotePreviewCollectionWithCompletionHandler:;
+ (id)previewCollectionClassName;
+ (void)previewCollectionUsingRemoteViewController:completionHandler:;
@end
