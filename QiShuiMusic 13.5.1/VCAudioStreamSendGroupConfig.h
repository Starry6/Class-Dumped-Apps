@interface VCAudioStreamSendGroupConfig : VCMediaStreamSendGroupConfig
@property (nonatomic) VCSystemAudioCaptureSession systemAudioCaptureSession;
@property (nonatomic) BOOL shouldScheduleMediaQueue;
@property (nonatomic) VCAudioStreamGroupCommonConfig audioStreamGroupConfig;
@property (nonatomic) Q hash;
@property (nonatomic) # superclass;
@property (nonatomic) NSString description;
@property (nonatomic) NSString debugDescription;
- (id)init;
- (void)dealloc;
- (id)audioStreamGroupConfig;
- (void)setAudioStreamGroupConfig:;
- (id)systemAudioCaptureSession;
- (void)setSystemAudioCaptureSession:;
- (BOOL)shouldScheduleMediaQueue;
- (void)setShouldScheduleMediaQueue:;
@end
