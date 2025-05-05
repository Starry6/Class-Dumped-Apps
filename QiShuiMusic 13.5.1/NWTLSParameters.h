@interface NWTLSParameters : NSObject
@property (nonatomic) NSData TLSSessionID;
@property (nonatomic) NSSet SSLCipherSuites;
@property (nonatomic) Q minimumSSLProtocolVersion;
@property (nonatomic) Q maximumSSLProtocolVersion;
- (id)SSLCipherSuites;
- (unsigned long long)minimumSSLProtocolVersion;
- (void)setMaximumSSLProtocolVersion:;
- (id)TLSSessionID;
- (void)setTLSSessionID:;
- (void)setSSLCipherSuites:;
- (void).cxx_destruct;
- (unsigned long long)maximumSSLProtocolVersion;
- (void)setMinimumSSLProtocolVersion:;
@end
