@interface NEIPv4Route : NSObject
@property (nonatomic) NSString destinationAddress;
@property (nonatomic) NSString destinationSubnetMask;
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
- (id)initWithDestinationAddress:subnetMask:;
- (id)destinationSubnetMask;
+ (BOOL)supportsSecureCoding;
+ (id)defaultRoute;
@end
