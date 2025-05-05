@interface AVCScreenCapture : NSObject
@property (nonatomic) <AVCScreenCaptureDelegate> delegate;
- (void)stopCapture;
- (void)dealloc;
- (id)delegate;
- (void)startCapture;
- (void)registerBlocksForNotifications;
- (void)deregisterBlocksForNotifications;
- (id)initWithDelegate:withConfig:;
- (id)newNSErrorWithErrorDictionary:;
- (void)updateScreenCaptureWithConfig:;
- (void)reportScreenShareIsStarting:;
+ (unsigned char)capabilities;
+ (unsigned char)captureCapabilities;
@end
