@interface NPTunnelTuscanyEndpoint : NWEndpoint
@property (nonatomic) NSData hostsData;
@property (nonatomic) NSArray hosts;
- (id)encodedData;
- (id)initWithCoder:;
- (id)hosts;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)description;
- (void)resolveEndpointWithCompletionHandler:;
- (id)initWithEncodedData:;
- (id)initWithHosts:;
- (id)copyHostsWithPort:;
- (id)hostsData;
+ (BOOL)supportsSecureCoding;
+ (id)encodeHosts:;
+ (unsigned int)endpointType;
+ (BOOL)supportsResolverCallback;
@end
