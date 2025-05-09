@interface CRCodeRedeemerController : CRCameraReader
@property (nonatomic) BOOL captureMode;
@property (nonatomic) Q captureCount;
@property (nonatomic) double sessionTimeout;
@property (nonatomic) q whiteBalanceMode;
@property (nonatomic) q focusMode;
@property (nonatomic) q exposureMode;
@property (nonatomic) q torchMode;
@property (nonatomic) NSString cameraMode;
@property (nonatomic) q cameraPosition;
@property (nonatomic) BOOL showDiagnosticHUD;
@property (nonatomic) <CRCodeRedeemerControllerDelegate> delegate;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)setDelegate:;
- (id)delegate;
- (void).cxx_destruct;
- (void)cameraReaderDidCancel:;
- (void)cameraReaderDidEnd:;
- (void)cameraReader:didFailWithError:;
- (void)cameraReaderDidDisplayMessage:;
- (void)cameraReaderDidFindTarget:;
- (void)cameraReader:didRecognizeObjects:;
- (void)showMessage:color:style:duration:;
+ (unsigned long long)isCRCodeRedeemerAvailable;
+ (id)findCodeInImage:maxStage:;
+ (id)findCodeInImage:maxStage:roi:;
@end
