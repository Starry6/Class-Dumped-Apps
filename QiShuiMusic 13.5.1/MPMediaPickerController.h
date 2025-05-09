@interface MPMediaPickerController : UIViewController
@property (nonatomic) <MPMediaPickerRemoteViewLoader> loader;
@property (nonatomic) Q mediaTypes;
@property (nonatomic) <MPMediaPickerControllerDelegate> delegate;
@property (nonatomic) BOOL allowsPickingMultipleItems;
@property (nonatomic) BOOL showsCloudItems;
@property (nonatomic) BOOL showsItemsWithProtectedAssets;
@property (nonatomic) NSString prompt;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (long long)preferredInterfaceOrientationForPresentation;
- (long long)modalPresentationStyle;
- (long long)_preferredModalPresentationStyle;
- (void)setDelegate:;
- (void)_sharedInit;
- (id)initWithCoder:;
- (BOOL)_canShowWhileLocked;
- (void)setPrompt:;
- (id)configuration;
- (id)delegate;
- (void)willMoveToParentViewController:;
- (void).cxx_destruct;
- (id)prompt;
- (void)viewDidAppear:;
- (void)viewWillAppear:;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithConfiguration:;
- (id)initWithNibName:bundle:;
- (void)viewDidLoad;
- (id)typeIdentifiers;
- (long long)selectionMode;
- (void)setAllowsPickingMultipleItems:;
- (unsigned long long)mediaTypes;
- (void)_pickerDidCancel;
- (id)loader;
- (void)remoteMediaPickerDidCancel;
- (void)remoteMediaPickerDidPickMediaItems:;
- (void)remoteMediaPickerDidPickPlaybackArchive:;
- (id)initWithMediaTypes:;
- (id)initWithSupportedTypeIdentifiers:selectionMode:;
- (BOOL)allowsPickingMultipleItems;
- (BOOL)showsCloudItems;
- (void)setShowsCloudItems:;
- (BOOL)showsItemsWithProtectedAssets;
- (void)setShowsItemsWithProtectedAssets:;
- (BOOL)picksSingleCollectionEntity;
- (void)setPicksSingleCollectionEntity:;
- (unsigned int)watchCompatibilityVersion;
- (void)setWatchCompatibilityVersion:;
- (BOOL)showsCatalogContent;
- (void)setShowsCatalogContent:;
- (BOOL)showsLibraryContent;
- (void)setShowsLibraryContent:;
- (BOOL)supportsUnavailableContent;
- (void)setSupportsUnavailableContent:;
- (BOOL)pickingForExternalPlayer;
- (void)setPickingForExternalPlayer:;
- (id)playbackArchiveConfiguration;
- (void)setPlaybackArchiveConfiguration:;
- (void)_forceDismissal;
- (void)_pickerDidPickItems:;
- (void)_pickerDidPickPlaybackArchive:;
- (BOOL)_hasAddedRemoteView;
- (void)_addRemoteView;
- (void)_resetRemoteViewController;
- (void)_synchronizeSettings;
- (void)_checkLibraryAuthorization;
- (void)setLoader:;
+ (void)preheatMediaPicker;
@end
