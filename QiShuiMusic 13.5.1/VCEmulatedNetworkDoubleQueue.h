@interface VCEmulatedNetworkDoubleQueue : VCEmulatedNetwork
- (void)push:;
- (void)dealloc;
- (id)initWithPolicies:;
- (void)runUntilTime:;
@end
