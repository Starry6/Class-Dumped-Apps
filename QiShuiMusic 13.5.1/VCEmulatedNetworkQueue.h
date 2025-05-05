@interface VCEmulatedNetworkQueue : VCEmulatedNetworkElement
- (int)write:;
- (void)dealloc;
- (id)initWithPolicies:;
- (void)runUntilTime:;
- (int)enqueuePacket:;
- (void)updateSettingsAtTime:;
- (void)markPacketLoss:;
- (int)dequeuePacket:time:;
@end
