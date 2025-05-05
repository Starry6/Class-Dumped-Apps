@interface VEAudioVoiceDetection : NSObject
@property (nonatomic) NSInteger audioFrameCount;
@property (nonatomic) float voiceDetectionResult;
- (int)audioFrameCount;
- (id)initWithSampleRate:channels:config:;
- (int)process:samples:;
- (void)resetVoiceDetectionResult;
- (void)setAudioFrameCount:;
- (void)setVoiceDetectionResult:;
- (float)voiceDetectionResult;
- (void)dealloc;
- (void).cxx_destruct;
- (void)reset;
- (float)fetchResult;
- (id).cxx_construct;
@end
