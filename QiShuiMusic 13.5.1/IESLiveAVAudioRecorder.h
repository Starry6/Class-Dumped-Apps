@interface IESLiveAVAudioRecorder : NSObject
@property (nonatomic) AVAudioRecorder recorder;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
@property (nonatomic) <IESLiveAudioRecorderDelegate> delegate;
@property (nonatomic) <IESLiveAudioRecorderOutput> audioOutput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL meteringEnabled;
- (void)setAudioOutput:;
- (void)startRecord;
- (void)stopRecord;
- (float)peakPowerForChannel:;
- (void)setMeteringEnabled:;
- (void)setDelegate:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (float)averagePowerForChannel:;
- (id)delegate;
- (void).cxx_destruct;
- (void)setRecorder:;
- (id)recorder;
- (id)audioOutput;
- (BOOL)meteringEnabled;
- (void)audioRecorderDidFinishRecording:successfully:;
- (BOOL)prepareToRecord;
- (void)audioRecorderEncodeErrorDidOccur:error:;
@end
