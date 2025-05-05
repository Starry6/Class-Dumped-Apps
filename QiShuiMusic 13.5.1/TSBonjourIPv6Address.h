@interface TSBonjourIPv6Address : NSObject
@property (nonatomic) BOOL hasLinkLayerAddress;
@property (nonatomic) r* ipv6Address;
@property (nonatomic) r* linkLayerAddress;
- (id)init;
- (id)copyWithZone:;
- (id)ipv6Address;
- (id)linkLayerAddress;
- (BOOL)getLinkLayerAddressError:;
- (BOOL)hasLinkLayerAddress;
- (void)setHasLinkLayerAddress:;
- (id)initWithIPv6Address:;
- (void)pokeDestinationAtPort:onInterfaceIndex:;
+ (BOOL)getLinkLayerAddress:forIPv6Address:error:;
@end
