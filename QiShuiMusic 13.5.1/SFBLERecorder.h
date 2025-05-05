@interface SFBLERecorder : NSObject
@property (nonatomic) q payloadType;
@property (nonatomic) <SFBLERecorderReplayDelegate> replayDelegate;
- (BOOL)saveToDirectory:;
- (void).cxx_destruct;
- (long long)payloadType;
- (id)initWithPayloadType:;
- (id)initWithRecordingURL:;
- (BOOL)recordDevice:data:rssi:info:error:;
- (BOOL)replayNextRecording;
- (id)replayDelegate;
- (void)setReplayDelegate:;
@end
