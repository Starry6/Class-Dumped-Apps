@interface ByteRTCAudioFrame : NSObject
@property (nonatomic) NSData buffer;
@property (nonatomic) NSInteger samples;
@property (nonatomic) q channel;
@property (nonatomic) q sampleRate;
- (int)samples;
- (void)setBuffer:;
- (void)setChannel:;
- (id)buffer;
- (long long)channel;
- (long long)sampleRate;
- (void)setSamples:;
- (void).cxx_destruct;
- (void)setSampleRate:;
@end
