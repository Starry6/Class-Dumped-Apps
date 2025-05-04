@interface AWESearchAIGCVoiceBroadcastPlayerConfig : NSObject
@property (nonatomic) double sampleRate;
@property (nonatomic) q numberOfChannels;
- (double)sampleRate;
- (void)setSampleRate:;
- (long long)numberOfChannels;
- (void)setNumberOfChannels:;
@end
