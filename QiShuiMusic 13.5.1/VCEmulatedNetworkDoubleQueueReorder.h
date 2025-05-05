@interface VCEmulatedNetworkDoubleQueueReorder : VCEmulatedNetworkDoubleQueue
- (void)push:;
- (void)dealloc;
- (id)initWithPolicies:;
- (BOOL)shouldSendPacketImmediatelyMM;
@end
