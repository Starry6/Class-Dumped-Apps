@interface LSSLiveDNSResolver : NSObject
@property (nonatomic) NSObject<OS_dispatch_queue> queue;
- (void)getIPList:completion:;
- (id)getIPList:dnsMode:;
- (void)getLocalDNSIPList:completion:;
- (id)init;
- (void).cxx_destruct;
- (void)setQueue:;
- (id)queue;
@end
