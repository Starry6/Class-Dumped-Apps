@interface AWEVoiceSearchAudioRecorder : NSObject
@property (nonatomic) double audioQueueTimeIntervalOfBuffer;
@property (nonatomic) <AWESearchAudioRecorderDelegate> delegate;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)stopRecord;
- (void)startRecord;
- (void)callBackDidOccurOSErrorWithCode:;
- (float)averagePowerForChannel;
- (double)audioQueueTimeIntervalOfBuffer;
- (void)disposeRecordQueue;
- (void)setAudioQueueTimeIntervalOfBuffer:;
- (void)setIsRunning:;
- (id)init;
- (id)delegate;
- (void).cxx_destruct;
- (void)setDelegate:;
- (BOOL)isRunning;
- (BOOL)prepareToRecord;
@end
