@interface CLMClickMitigator : NSObject
@property (nonatomic) AVAudioFormat externalFormat;
@property (nonatomic) AVAudioFormat processingFormat;
@property (nonatomic) AVAudioConverter inputConverter;
@property (nonatomic) AVAudioConverter outputConverter;
@property (nonatomic) I upstreamLatency;
@property (nonatomic) NSString tuningPath;
- (id)processingFormat;
- (void).cxx_destruct;
- (id)initWithFormat:upstreamLatency:;
- (id)tuningPath;
- (id)getCore;
- (void)mitigateClicks:machAbsoluteTimeOfFirstSample:numSamples:audioReader:audioRewriter:;
- (void)setTuningPath:;
- (id)externalFormat;
- (void)setExternalFormat:;
- (void)setProcessingFormat:;
- (id)inputConverter;
- (void)setInputConverter:;
- (id)outputConverter;
- (void)setOutputConverter:;
- (unsigned int)upstreamLatency;
- (void)setUpstreamLatency:;
@end
