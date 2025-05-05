@interface DCDocumentCameraViewController_ViewService : DCDocumentCameraViewController
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
- (void)dealloc;
- (void)accelerometer:didChangeDeviceOrientation:;
- (void).cxx_destruct;
- (void)accelerometer:didAccelerateWithTimeStamp:x:y:z:eventType:;
- (id)initWithDelegate:;
- (void)didFailWithError:;
- (void)viewDidLoad;
- (id)accelerometer;
- (void)setAccelerometer:;
- (void)viewServicePreferredSizeDidChange:;
- (void)didFinishWithDocumentInfoCollection:;
- (id)castedChildViewController;
- (id)viewServiceViewController;
- (id)viewServiceSession;
- (void)setViewServiceSession:;
@end
