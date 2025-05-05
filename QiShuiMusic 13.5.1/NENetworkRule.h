@interface NENetworkRule : NSObject
@property (nonatomic) BOOL appliesToLoopback;
@property (nonatomic) NWHostEndpoint matchRemoteEndpoint;
@property (nonatomic) Q matchRemotePrefix;
@property (nonatomic) NWHostEndpoint matchLocalNetwork;
@property (nonatomic) Q matchLocalPrefix;
@property (nonatomic) q matchProtocol;
@property (nonatomic) q matchDirection;
- (BOOL)checkValidityAndCollectErrors:;
- (id)descriptionWithIndent:options:;
- (id)initWithCoder:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)copyWithZone:;
- (id)initWithDestinationNetwork:prefix:protocol:;
- (id)initWithDestinationHost:protocol:;
- (id)initWithRemoteNetwork:remotePrefix:localNetwork:localPrefix:protocol:direction:;
- (id)matchRemoteEndpoint;
- (unsigned long long)matchRemotePrefix;
- (id)matchLocalNetwork;
- (unsigned long long)matchLocalPrefix;
- (long long)matchProtocol;
- (long long)matchDirection;
- (BOOL)appliesToLoopback;
+ (BOOL)supportsSecureCoding;
@end
