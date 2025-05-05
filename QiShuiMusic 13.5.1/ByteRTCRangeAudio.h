@interface ByteRTCRangeAudio : NSObject
- (id)initWithRangeAudio:;
- (void)enableRangeAudio:;
- (int)updateReceiveRange:;
- (int)setAttenuationModel:coefficient:;
- (void)setNoAttenuationFlags:;
- (void)dealloc;
- (int)updatePosition:;
@end
