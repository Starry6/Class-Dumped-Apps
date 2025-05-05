@interface IDSAPSUserPayload : NSObject
@property (nonatomic) NSMutableDictionary payload;
- (id)payload;
- (void)setPayload:;
- (id)extractMadridProtocolPayloadFrom:;
- (id)extractCommandResponseFrom:;
- (void)logHeaderDiffAgainstSource:;
- (id)extractMadridHttpHeadersFrom:;
- (void).cxx_destruct;
- (id)initWithBlastDoorObject:;
- (id)extractCommandWebTunnelResponseFrom:;
- (void)logDiffBetween:andTarget:withKeyPath:;
- (id)extractQuickRelayAllocationStatusFrom:;
- (id)extractMadridDeliveryContextFrom:;
- (id)extractQuickRelaySelfAllocTokenFrom:;
@end
