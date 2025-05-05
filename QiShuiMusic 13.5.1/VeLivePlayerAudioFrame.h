@interface VeLivePlayerAudioFrame : NSObject
@property (nonatomic) q bufferType;
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger channels;
@property (nonatomic) NSInteger bitDepth;
@property (nonatomic) {?=qiIq} pts;
@property (nonatomic) NSData data;
@property (nonatomic) NSInteger samples;
- (id)initWithAudioData:sampleRate:channles:samples:bitDepth:pts:;
- (void)setBufferType:;
- (int)samples;
- (int)channels;
- (int)bitDepth;
- (id)data;
- (int)sampleRate;
- (void).cxx_destruct;
- (id)pts;
- (long long)bufferType;
@end
