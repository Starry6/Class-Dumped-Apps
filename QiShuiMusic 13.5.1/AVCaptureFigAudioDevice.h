@interface AVCaptureFigAudioDevice : AVCaptureDevice
- (id)deviceType;
- (BOOL)hasMediaType:;
- (void)setClientAudioClockDeviceUID:;
- (id)init;
- (id)uniqueID;
- (void)dealloc;
- (id)_initWithFigCaptureSource:;
- (id)clientAudioClockDeviceUID;
- (id)deviceClock;
- (id)_copyFigCaptureSourceProperty:;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:;
- (void)_reconnectToFigCaptureSource:;
- (BOOL)supportsAVCaptureSessionPreset:;
- (id)modelID;
- (id)localizedName;
- (id)figCaptureSource;
- (void)_handleNotification:payload:;
- (void)audioInputDevicesDidChangeHandler:;
- (void)stopUsingDevice;
- (void)_setFigCaptureSource:;
- (BOOL)isConnected;
- (id)figCaptureSourceAudioSettingsForSessionPreset:;
- (BOOL)isBuiltInStereoAudioCaptureSupported;
- (BOOL)startUsingDevice:;
+ (id)_devices;
+ (void)_reconnectDevices:;
@end
