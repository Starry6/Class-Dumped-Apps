@interface UICloudSharingController : UIViewController
@property (nonatomic) UIActivityViewController activityViewController;
@property (nonatomic) _UIResilientRemoteViewContainerViewController childViewController;
@property (nonatomic) _UIShareInvitationRemoteViewController remoteViewController;
@property (nonatomic) CKShare share;
@property (nonatomic) CKContainer container;
@property (nonatomic) CKContainerSetupInfo containerSetupInfo;
@property (nonatomic) NSDictionary participantDetails;
@property (nonatomic) @? preparationHandler;
@property (nonatomic) UIViewController originalPresentingViewController;
@property (nonatomic) UIViewController strongReferenceToOurself;
@property (nonatomic) NSString sectionTitleForAuxiliarySwitches;
@property (nonatomic) NSString primaryAuxiliarySwitchTitle;
@property (nonatomic) BOOL primaryAuxiliarySwitchState;
@property (nonatomic) NSString secondaryAuxiliarySwitchTitle;
@property (nonatomic) BOOL secondaryAuxiliarySwitchState;
@property (nonatomic) NSString rootFolderTitle;
@property (nonatomic) NSString folderSubitemName;
@property (nonatomic) UIImage headerPrimaryImage;
@property (nonatomic) UIImage headerSecondaryImage;
@property (nonatomic) CKSystemSharingUIObserver systemSharingUIObserver;
@property (nonatomic) <_UICloudSharingControllerDelegate_Internal> internalDelegate;
@property (nonatomic) <UICloudSharingControllerDelegate> delegate;
@property (nonatomic) Q availablePermissions;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) _UIRemoteViewController _containedRemoteViewController;
- (void)setContainer:;
- (void)dealloc;
- (long long)modalPresentationStyle;
- (void)setShare:;
- (id)share;
- (void)setDelegate:;
- (id)container;
- (id)internalDelegate;
- (void)setInternalDelegate:;
- (void)_didDismiss;
- (id)delegate;
- (void).cxx_destruct;
- (BOOL)_requiresCustomPresentationController;
- (id)_containedRemoteViewController;
- (void)_setChildViewController:;
- (id)_childViewController;
- (void)__viewControllerWillBePresented:;
- (id)_customPresentationControllerForPresentedController:presentingController:sourceController:;
- (id)_remoteViewController;
- (id)initWithShare:container:;
- (void)_setSectionTitleForAuxiliarySwitches:;
- (void)_cloudSharingControllerDidModifyPrimarySwitch:;
- (void)_cloudSharingControllerDidModifySecondarySwitch:;
- (void)_cloudSharingControllerDidActivateShowSharedFolder;
- (void)_cloudSharingControllerDidChooseTransport:;
- (void)_shareDidChange:;
- (void)_shareWasMadePrivate;
- (void)_performAuxiliaryActionWithCompletion:;
- (void)_performHeaderActionWithCompletion:;
- (void)_dismissViewControllerWithError:;
- (void)_requestSavedShareWithCompletion:;
- (void)_dismissForActivityRepresentation:;
- (void)_representFullscreenAfterActivityDismissal:;
- (void)_cloudSharingControllerDidUpdateRootFolderURL:;
- (void)_cloudSharingControllerDidActivateShowActivityController;
- (void)_cloudSharingControllerDidActivateAddPeopleWithRemoteSourceX:y:width:height:;
- (id)initWithShare:preparationHandler:;
- (id)initWithPreparationHandler:;
- (id)createActivityLinkMetadata;
- (void)_callPreparationHandler:;
- (void)addResizingChildViewController:;
- (void)_deleteShareAfterDismissalWithoutSave:;
- (id)activityItemSource;
- (void)_setParticipantDetails:;
- (void)_setPrimaryAuxiliarySwitchTitle:;
- (void)_setPrimaryAuxiliarySwitchState:;
- (void)_setSecondaryAuxiliarySwitchTitle:;
- (void)_setSecondaryAuxiliarySwitchState:;
- (void)_setRootFolderTitle:;
- (void)_setFolderSubitemName:;
- (void)_setHeaderPrimaryImage:;
- (void)_setHeaderSecondaryImage:;
- (id)_sharingViewPresentationController;
- (id)excludedActivityTypes;
- (void)_sendDidStopSharingDelegate;
- (unsigned long long)availablePermissions;
- (void)setAvailablePermissions:;
- (id)_activityViewController;
- (void)_setActivityViewController:;
- (id)containerSetupInfo;
- (void)setContainerSetupInfo:;
- (id)_participantDetails;
- (id)preparationHandler;
- (void)setPreparationHandler:;
- (id)_originalPresentingViewController;
- (void)_setOriginalPresentingViewController:;
- (id)_strongReferenceToOurself;
- (void)_setStrongReferenceToOurself:;
- (id)_sectionTitleForAuxiliarySwitches;
- (id)_primaryAuxiliarySwitchTitle;
- (BOOL)_primaryAuxiliarySwitchState;
- (id)_secondaryAuxiliarySwitchTitle;
- (BOOL)_secondaryAuxiliarySwitchState;
- (id)_rootFolderTitle;
- (id)_folderSubitemName;
- (id)_headerPrimaryImage;
- (id)_headerSecondaryImage;
- (id)_systemSharingUIObserver;
- (void)_setSystemSharingUIObserver:;
+ (id)allowedSharingOptionsFromPermissions:;
@end
