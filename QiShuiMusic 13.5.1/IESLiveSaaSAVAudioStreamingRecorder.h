@interface IESLiveSaaSAVAudioStreamingRecorder : NSObject
@property (nonatomic) <IESLiveAudioRecorderDelegate> delegate;
@property (nonatomic) <IESLiveAudioRecorderOutput> audioOutput;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL meteringEnabled;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (void)setAudioOutput:;
- (void)callBackDidOccurOSErrorWithCode:;
- (void)startRecord;
- (void)stopRecord;
- (void)setMeteringEnabled:;
- (void)setDelegate:;
- (void)setIsRunning:;
- (BOOL)isRunning;
- (float)averagePowerForChannel:;
- (id)delegate;
- (void).cxx_destruct;
- (id)audioOutput;
- (BOOL)meteringEnabled;
- (BOOL)prepareToRecord;
@end
