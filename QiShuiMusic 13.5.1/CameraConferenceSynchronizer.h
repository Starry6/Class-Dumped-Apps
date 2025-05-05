@interface CameraConferenceSynchronizer : NSObject
@property (nonatomic) {CGSize=dd} localPortraitAspectRatio;
- (id)init;
- (void)dealloc;
- (id)localPortraitAspectRatio;
- (void)setLocalPortraitAspectRatio:;
- (void)reset;
- (BOOL)shouldConferenceChangeCameraToCaptureSettings;
- (BOOL)shouldConferenceSendFirstRemoteFrameNotification;
- (BOOL)shouldConferenceChangeCameraToPreviewSettings;
- (void)changeCameraToCaptureSettings:forced:;
- (void)notifyClientOfRemoteFrame:;
- (void)cameraSizeChangedTo:;
- (void)scheduleFirstRemoteFrameNotification:;
- (void)scheduleCameraChangeToPreviewSettings;
- (void)scheduleCameraChangeToCaptureSettings:;
@end
