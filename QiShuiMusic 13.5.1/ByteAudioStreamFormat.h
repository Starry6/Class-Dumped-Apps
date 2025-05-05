@interface ByteAudioStreamFormat : NSObject
@property (nonatomic) NSInteger sampleRate;
@property (nonatomic) NSInteger channelNum;
@property (nonatomic) NSInteger bitrateBps;
@property (nonatomic) NSInteger frameSizeMs;
@property (nonatomic) q codecType;
- (int)getSampleRate;
- (int)getChannelNum;
- (long long)getCodecType;
- (int)bitrateBps;
- (int)frameSizeMs;
- (void)setFrameSizeMs:;
- (int)sampleRate;
- (void)setSampleRate:;
- (long long)codecType;
- (void)setCodecType:;
- (void)setBitrateBps:;
- (void)setChannelNum:;
- (int)channelNum;
@end
