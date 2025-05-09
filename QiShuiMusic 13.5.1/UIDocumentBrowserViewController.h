@interface UIDocumentBrowserViewController : UIViewController
@property (nonatomic) NSArray leadingBarButtonTrackingViews;
@property (nonatomic) NSArray trailingBarButtonTrackingViews;
@property (nonatomic) NSArray remoteAdditionalLeadingNavigationBarButtonItems;
@property (nonatomic) NSArray remoteAdditionalTrailingNavigationBarButtonItems;
@property (nonatomic) BOOL shouldDelayRemoteViewController;
@property (nonatomic) UIViewController dummySplitViewController;
@property (nonatomic) _UIResilientRemoteViewContainerViewController remoteViewController;
@property (nonatomic) DOCDocBrowserVC_UIActivityViewController activityViewController;
@property (nonatomic) <DOCServiceDocumentBrowserViewControllerInterface> serviceProxy;
@property (nonatomic) NSOperationQueue serviceQueue;
@property (nonatomic) DOCConfiguration configuration;
@property (nonatomic) UIColor backgroundColor;
@property (nonatomic) NSString createButtonTitle;
@property (nonatomic) <UIDocumentBrowserViewControllerDelegate> delegate;
@property (nonatomic) BOOL allowsDocumentCreation;
@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (nonatomic) NSArray allowedContentTypes;
@property (nonatomic) NSArray recentDocumentsContentTypes;
@property (nonatomic) NSArray contentTypesForRecentDocuments;
@property (nonatomic) BOOL shouldShowFileExtensions;
@property (nonatomic) NSArray additionalLeadingNavigationBarButtonItems;
@property (nonatomic) NSArray additionalTrailingNavigationBarButtonItems;
@property (nonatomic) NSArray customActions;
@property (nonatomic) Q browserUserInterfaceStyle;
@property (nonatomic) NSString localizedCreateDocumentActionTitle;
@property (nonatomic) double defaultDocumentAspectRatio;
@property (nonatomic) _UIRemoteViewController _containedRemoteViewController;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) DOCAppearance effectiveAppearance;
- (id)serviceProxy;
- (void)setServiceProxy:;
- (id)remoteViewController;
- (id)init;
- (long long)preferredStatusBarStyle;
- (void)setBackgroundColor:;
- (void)dealloc;
- (void)preferredContentSizeDidChangeForChildContentContainer:;
- (void)setEditing:animated:;
- (void)viewWillTransitionToSize:withTransitionCoordinator:;
- (id)backgroundColor;
- (void)viewDidMoveToWindow:shouldAppearOrDisappear:;
- (id)allowedContentTypes;
- (void)setDelegate:;
- (void)presentViewController:animated:completion:;
- (void)setServiceQueue:;
- (id)initWithCoder:;
- (void)setConfiguration:;
- (id)serviceQueue;
- (void)applicationDidBecomeActive:;
- (id)preferredFocusEnvironments;
- (void)traitCollectionDidChange:;
- (void)encodeWithCoder:;
- (id)keyCommands;
- (void)updateBackgroundColor;
- (id)configuration;
- (BOOL)canBecomeFirstResponder;
- (BOOL)_delegateRespondsToSelector:;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)canPerformAction:withSender:;
- (void)setRemoteViewController:;
- (id)initWithConfiguration:;
- (void)viewDidLoad;
- (void)setAllowsPickingMultipleItems:;
- (void)setAllowsDocumentCreation:;
- (void)setAdditionalTrailingNavigationBarButtonItems:;
- (unsigned long long)browserUserInterfaceStyle;
- (void)revealDocumentAtURL:importIfNeeded:completion:;
- (void)setBrowserUserInterfaceStyle:;
- (void)presentationController:prepareAdaptivePresentationController:;
- (id)_containedRemoteViewController;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)initForOpeningContentTypes:;
- (BOOL)shouldShowFileExtensions;
- (void)setShouldShowFileExtensions:;
- (id)activityViewController;
- (void)setActivityViewController:;
- (id)initForOpeningFilesWithContentTypes:;
- (id)transitionControllerForDocumentAtURL:;
- (id)customActions;
- (void)setCustomActions:;
- (BOOL)allowsPickingMultipleItems;
- (void)_didTriggerCustomActionWithIdentifier:onItemBookmarks:;
- (void)_didTriggerBarButtonWithUUID:;
- (void)_didPickItemBookmarks:;
- (void)_commitDocumentURLPreview:;
- (void)_didRequestDocumentCreationWithHandler:;
- (void)_didImportDocumentAtURL:toDestinationItemBookmark:;
- (void)_failedToImportDocumentAtURL:error:;
- (void)_updateRemoteBarButtonFrames:forUUID:;
- (void)_presentActivityViewControllerForItemBookmarks:withPopoverTracker:isContentManaged:additionalActivities:activityProxy:;
- (void)_documentPickerWasCancelled;
- (void)performKeyCommandNoOpOnHostSide:;
- (void)didTapTryAgainInErrorViewController:;
- (void)remoteViewController:didTerminateViewServiceWithError:;
- (void)effectiveAppearanceDidChange:;
- (id)configurationForOpeningDocumentsWithContentTypes:;
- (void)__commonInit;
- (void)addDummySplitViewControllerForPreferredContentSize;
- (void)_embedDocumentBrowserViewController;
- (void)_instantiateRemoteViewControllerWithCompletion:;
- (void)_embedViewController:;
- (void)_displayRemoteControllerIfNeeded;
- (void)dismissAllPresentedViewControllers:completion:;
- (id)transitionControllerForDocumentURL:;
- (void)importDocumentAtURL:nextToDocumentAtURL:mode:completionHandler:;
- (void)importDocumentAtURL:mode:toCurrentBrowserLocationWithCompletion:;
- (void)importDocumentAtURL:byMoving:toCurrentBrowserLocationWithCompletion:;
- (void)_importDocumentAtURL:neighbourURL:mode:completionHandler:;
- (id)recentDocumentsContentTypes;
- (id)contentTypesForRecentDocuments;
- (void)setAdditionalLeadingNavigationBarButtonItems:;
- (void)setDefaultDocumentAspectRatio:;
- (double)defaultDocumentAspectRatio;
- (void)setLocalizedCreateDocumentActionTitle:;
- (void)setCreateButtonTitle:;
- (id)localizedCreateDocumentActionTitle;
- (id)createButtonTitle;
- (void)clearCurrentOpenInteraction;
- (void)_clearShownViewControllers;
- (void)_showErrorViewController;
- (void)_showDocumentBrowserViewController:;
- (void)prepareItemBookmarks:usingBookmark:completionBlock:;
- (void)prepareItemBookmarks:forMode:usingBookmark:completionBlock:;
- (void)getTrackingViews:remoteButtons:fromBarButtons:;
- (id)trackingViewForUUID:;
- (id)remoteBarButtonForUUID:;
- (void)addOperationToServiceQueue:;
- (void)_displayActivityControllerWithItemBookmarks:popoverTracker:isContentManaged:additionalActivities:activityProxy:;
- (BOOL)_shouldConsultDelegateShouldShowActivityViewControllerForItemBookmarks:;
- (id)_activityViewControllerWithItemBookmarks:isForTitleMenuFolderSharing:popoverTracker:isContentManaged:additionalActivities:activityRunner:;
- (id)_sandboxingURLWrapperForURL:readonly:error:;
- (void)_establishFirstResponderOnServiceSideForKeyCommand:;
- (void)_renameDocumentAtURL:newName:completionBlock:;
- (void)_fallbackRenameDocumentAtURL:proposedName:completionHandler:;
- (void)renameDocumentAtURL:proposedName:completionHandler:;
- (BOOL)supportsRemovableFileProvidersForConfiguration:;
- (id)recentDocumentsContentTypesFromInfoPlist;
- (void)forwardHostSceneIdentifier:;
- (void)manageOverrideIfNecessaryForPresentationController:;
- (BOOL)allowsDocumentCreation;
- (id)additionalLeadingNavigationBarButtonItems;
- (id)additionalTrailingNavigationBarButtonItems;
- (id)leadingBarButtonTrackingViews;
- (void)setLeadingBarButtonTrackingViews:;
- (id)trailingBarButtonTrackingViews;
- (void)setTrailingBarButtonTrackingViews:;
- (id)remoteAdditionalLeadingNavigationBarButtonItems;
- (void)setRemoteAdditionalLeadingNavigationBarButtonItems:;
- (id)remoteAdditionalTrailingNavigationBarButtonItems;
- (void)setRemoteAdditionalTrailingNavigationBarButtonItems:;
- (BOOL)shouldDelayRemoteViewController;
- (void)setShouldDelayRemoteViewController:;
- (id)dummySplitViewController;
- (void)setDummySplitViewController:;
+ (id)placeholderURLForDownloadsFolder;
+ (id)preferredPickerContentSizeForWindow:;
@end
