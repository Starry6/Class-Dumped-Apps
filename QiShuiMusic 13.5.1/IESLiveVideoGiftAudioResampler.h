@interface IESLiveVideoGiftAudioResampler : NSObject
- (int)convert:inSamplersPerChannel:buffer:;
- (void)giveBack:;
- (id)initWithSampleRate:channelNumber:;
- (void)dealloc;
- (BOOL)setup:;
@end
