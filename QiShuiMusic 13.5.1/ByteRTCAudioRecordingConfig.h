@interface ByteRTCAudioRecordingConfig : NSObject
@property (nonatomic) NSString absoluteFileName;
@property (nonatomic) q frameSource;
@property (nonatomic) q sampleRate;
@property (nonatomic) q channel;
@property (nonatomic) q quality;
- (id)absoluteFileName;
- (void)setAbsoluteFileName:;
- (long long)frameSource;
- (void)setFrameSource:;
- (void)setChannel:;
- (long long)quality;
- (id)init;
- (long long)channel;
- (void)setQuality:;
- (long long)sampleRate;
- (void).cxx_destruct;
- (void)setSampleRate:;
@end
