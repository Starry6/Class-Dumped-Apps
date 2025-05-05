@interface VNDocumentCameraViewController_ViewService : VNDocumentCameraViewController
@property (nonatomic) <DCDocumentCameraViewServiceViewController> viewServiceViewController;
@property (nonatomic) DCDocumentCameraRemoteViewController remoteViewController;
@property (nonatomic) DCDocumentCameraViewServiceSession viewServiceSession;
@property (nonatomic) BKSAccelerometer accelerometer;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)didCancel;
- (void)dismiss;
- (id)remoteViewController;
- (id)init;
- (void)dealloc;
- (void)accelerometer:didChangeDeviceOrientation:;
- (void).cxx_destruct;
- (void)accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:;
- (void)didFailWithError:;
- (void)viewDidLoad;
- (id)accelerometer;
- (void)setAccelerometer:;
- (void)viewServicePreferredSizeDidChange:;
- (void)didFinishWithDocumentInfoCollection:;
- (id)castedChildViewController;
- (id)viewServiceViewController;
- (void)removeSaveActionBlockerForFiles;
- (id)viewServiceSession;
- (void)setViewServiceSession:;
@end
