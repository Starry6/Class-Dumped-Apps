@interface ByteRTCAudioFormat : NSObject
@property (nonatomic) q sampleRate;
@property (nonatomic) q channel;
@property (nonatomic) NSInteger samplesPerCall;
- (int)samplesPerCall;
- (void)setSamplesPerCall:;
- (void)setChannel:;
- (id)init;
- (long long)channel;
- (long long)sampleRate;
- (void)setSampleRate:;
@end
