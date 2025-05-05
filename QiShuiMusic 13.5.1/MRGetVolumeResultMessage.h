@interface MRGetVolumeResultMessage : MRProtocolMessage
@property (nonatomic) float volume;
- (float)volume;
- (unsigned long long)type;
- (id)initWithVolume:;
@end
