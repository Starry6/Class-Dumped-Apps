@interface AVVCPrepareRecordSettings : NSObject
@property (nonatomic) Q streamID;
@property (nonatomic) NSDictionary avAudioSettings;
@property (nonatomic) double recordBufferDuration;
@property (nonatomic) BOOL meteringEnabled;
- (void)setMeteringEnabled:;
- (void).cxx_destruct;
- (unsigned long long)streamID;
- (void)setRecordBufferDuration:;
- (id)initWithStreamID:settings:bufferDuration:;
- (void)setStreamID:;
- (BOOL)meteringEnabled;
- (id)avAudioSettings;
- (void)setAvAudioSettings:;
- (double)recordBufferDuration;
@end
