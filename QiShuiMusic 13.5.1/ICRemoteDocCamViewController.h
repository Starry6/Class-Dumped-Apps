@interface ICRemoteDocCamViewController : UIViewController
@property (nonatomic) SidecarService sidecarService;
@property (nonatomic) SidecarRequest sidecarRequest;
@property (nonatomic) ICDocCamImageCache imageCache;
@property (nonatomic) <ICRemoteDocCamViewControllerDelegate> delegate;
- (id)imageCache;
- (void)setDelegate:;
- (void)observeValueForKeyPath:ofObject:change:context:;
- (BOOL)_canShowWhileLocked;
- (void)setImageCache:;
- (id)delegate;
- (void).cxx_destruct;
- (void)viewDidAppear:;
- (void)viewDidLoad;
- (void)makeRequestToDevice:;
- (id)initWithImageCache:;
- (id)makeDevicesAlertController;
- (id)makeAlertControllerForError:;
- (void)sidecarRequestDidFinish;
- (id)infoForSidecarItems:;
- (id)infoForArchiveSidecarItems:;
- (id)infoForImageSidecarItems:;
- (id)sidecarService;
- (void)setSidecarService:;
- (id)sidecarRequest;
- (void)setSidecarRequest:;
@end
