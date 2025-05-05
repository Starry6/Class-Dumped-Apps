@interface VCTransportSessionProxy : VCTransportSession
- (BOOL)isIPv6;
- (void)start;
- (int)createVFD:forStreamType:;
- (int)networkInterfaceType;
- (unsigned int)networkMTU;
- (id)initWithTransportSessionID:;
@end
