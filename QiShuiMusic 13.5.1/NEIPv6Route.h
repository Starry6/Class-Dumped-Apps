@interface NEIPv6Route : NSObject
@property (nonatomic) NSString destinationAddress;
@property (nonatomic) NSNumber destinationNetworkPrefixLength;
@property (nonatomic) NSString gatewayAddress;
- (BOOL)checkValidityAndCollectErrors:;
- (id)destinationAddress;
- (id)initFromLegacyDictionary:;
- (id)descriptionWithIndent:options:;
- (id)copyLegacyDictionary;
- (id)initWithCoder:;
- (BOOL)isDefaultRoute;
- (void)setGatewayAddress:;
- (void)encodeWithCoder:;
- (void).cxx_destruct;
- (id)gatewayAddress;
- (id)copyWithZone:;
- (id)initWithDestinationAddress:networkPrefixLength:;
- (id)destinationNetworkPrefixLength;
+ (BOOL)supportsSecureCoding;
+ (id)defaultRoute;
@end
