@interface MRLegacyVolumeControlCapabilitiesDidChangeMessage : MRProtocolMessage
@property (nonatomic) I capabilities;
- (unsigned int)capabilities;
- (id)initWithCapabilities:;
- (unsigned long long)type;
@end
