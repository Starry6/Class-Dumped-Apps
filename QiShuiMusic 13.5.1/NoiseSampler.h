@interface NoiseSampler : NSObject
- (id)init;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithZipfOfSize:;
- (id)initWithUnigram:ofSize:;
- (unsigned long long)drawNoise;
@end
