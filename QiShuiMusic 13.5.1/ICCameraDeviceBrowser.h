@interface ICCameraDeviceBrowser : NSObject
@property (nonatomic) NSMutableArray devices;
@property (nonatomic) NSMutableArray browsers;
- (void)stop:;
- (id)init;
- (void)start:;
- (void)dealloc;
- (id)devices;
- (id)browsers;
- (void)handleCommandCompletionNotification:;
- (void)handleImageCaptureEventNotification:;
- (void)runSuspensionTimer:;
- (void)addBrowser:;
- (void)removeBrowser:;
- (BOOL)startPTPCameraBrowser;
- (BOOL)startMSCameraBrowser;
- (BOOL)startRSCameraBrowser;
- (void)notifySuspension:;
- (id)deviceWithDelegate:;
+ (BOOL)exists;
+ (id)defaultBrowser;
@end
