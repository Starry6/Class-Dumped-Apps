@interface FigCaptureLogSmartCameraGating : NSObject
- (void)logGateClosed;
- (void)dealloc;
- (void)logGateOpened;
- (void)logTracksCreated:;
- (void)logSmartCamIsConfident:presentedIdentifiers:presentedCount:;
- (id)initWithGateIdentifier:;
@end
