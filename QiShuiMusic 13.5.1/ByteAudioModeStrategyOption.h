@interface ByteAudioModeStrategyOption : NSObject
@property (nonatomic) q micOn;
@property (nonatomic) q micOff;
- (id)initWithType:micOff:;
- (long long)micOn;
- (void)setMicOn:;
- (long long)micOff;
- (void)setMicOff:;
- (id)copyWithZone:;
@end
