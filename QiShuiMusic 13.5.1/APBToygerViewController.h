@interface APBToygerViewController : DTFBaseViewController
@property (nonatomic) BOOL faceRecognitionStarted;
@property (nonatomic) BOOL isRotation;
@property (nonatomic) APBDTFUploadToastView uploadView;
@property (nonatomic) <DTFFaceViewProtocol> faceView;
- (void)faceDectectComplete;
- (BOOL)faceRecognitionStarted;
- (void)handleFaceStateChange:stateTips:actionGuide:progress:;
- (void)setFaceRecognitionStarted:;
- (void)setPhotinusColor:;
- (void)setUploadView:;
- (void)showBlur:;
- (void)startFaceRecognition:;
- (id)uploadView;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (BOOL)isRotation;
- (void)setIsRotation:;
- (id)faceView;
- (void)setFaceView:;
@end
