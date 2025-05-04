@interface AWESearchAIGCSAMITTSConfig : NSObject
@property (nonatomic) q sampleRate;
@property (nonatomic) NSString format;
@property (nonatomic) NSString speaker;
@property (nonatomic) NSString ttsExtra;
- (id)ttsExtra;
- (void)setTtsExtra:;
- (void)setSpeaker:;
- (id)format;
- (long long)sampleRate;
- (void)setFormat:;
- (void).cxx_destruct;
- (void)setSampleRate:;
- (id)speaker;
@end
