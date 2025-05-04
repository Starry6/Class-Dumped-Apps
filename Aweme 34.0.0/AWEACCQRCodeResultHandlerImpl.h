@interface AWEACCQRCodeResultHandlerImpl : NSObject
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (BOOL)isCurrentDialog;
- (void)resetCameraScanSampleImageGuide;
- (void)openMyQrCodePageWithTrackParams:;
- (void)handleScanResult:isShapedType:enterFrom:URLProcessBlock:completion:;
- (void)openMyQrCodePage;
- (void)handleCameraScanResult:trackParams:urlProcessBlock:completion:;
- (void)handleCameraScanConvertResult:trackParams:enableAnalysis:completion:;
- (void)handleCameraScanSampleImageGuideWithCompletion:trackParams:;
- (void)handleCameraScanSampleImageGuideWithCompletion:trackParams:showOnVc:;
- (id)displayScanAlbumImageGuideWithTrackParams:usagePage:showOnView:targetView:targetPoint:extra:completion:;
@end
