@interface MRVVIClient : NSObject
- (id)init;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_recordingStateChangedNotification:;
- (void)setRecordingStateCallback:forDeviceID:;
+ (id)sharedClient;
@end
