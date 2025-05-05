@interface WebCoreAudioCaptureSourceIOSListener : NSObject
- (id)initWithCallback:;
- (void)invalidate;
- (void)sessionMediaServicesWereReset:;
@end
