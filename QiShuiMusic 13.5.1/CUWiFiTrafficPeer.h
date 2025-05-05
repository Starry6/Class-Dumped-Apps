@interface CUWiFiTrafficPeer : NSObject
@property (nonatomic) BOOL active;
@property (nonatomic) (?={sockaddr=CC[14c]}{sockaddr_in=CCS{in_addr=I}[8c]}{sockaddr_in6=CCSI{in6_addr=(?=[16C][8S][4I])}I}) peerIP;
@property (nonatomic) NSString sessionID;
@property (nonatomic) I trafficFlags;
- (BOOL)active;
- (void)setSessionID:;
- (id)sessionID;
- (void).cxx_destruct;
- (void)setActive:;
- (unsigned int)trafficFlags;
- (void)setTrafficFlags:;
- (id)peerMACAddressData;
- (id)peerIP;
- (void)setPeerIP:;
@end
